#include "itkImage.h"
#include "itkRegionOfInterestImageFilter.h"

// Setup types
typedef itk::Image<double, 2>                   ImageType;

void CreateImage(ImageType::Pointer image)
{
  // Create a black image with a white square
  ImageType::IndexType start = {{-50, -40}};

  ImageType::SizeType size;
  size.Fill(582);

  ImageType::RegionType region(start,size);
  image->SetRegions(region);
  image->Allocate();
  image->FillBuffer(0);
}

int main( int argc, char *argv[] )
{
  ImageType::Pointer image = ImageType::New();
  CreateImage(image);

  typedef itk::RegionOfInterestImageFilter< ImageType,ImageType> RoiCropType;
  RoiCropType::Pointer roiCropFilter = RoiCropType::New();
  roiCropFilter->SetInput(image);

  ImageType::IndexType index;
  index[0] = 15;
  index[1] = 0;

  ImageType::SizeType size;
  size[0] = 553;
  size[1] = 582;

  ImageType::RegionType roi;
  roi.SetIndex(index);
  roi.SetSize(size);

  roiCropFilter->SetRegionOfInterest(roi);
  roiCropFilter->Update();

  return EXIT_SUCCESS;
}

