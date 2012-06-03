#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <vtkPoints.h>

int main(int argc, char *argv[])
{
  vtkSmartPointer<vtkPolyData> polyData = vtkSmartPointer<vtkPolyData>::New();
  vtkSmartPointer<vtkPoints> points = vtkSmartPointer<vtkPoints>::New();
  polyData->SetPoints(points);

  std::cout << "done." << std::endl;
  
  return EXIT_SUCCESS;
}
