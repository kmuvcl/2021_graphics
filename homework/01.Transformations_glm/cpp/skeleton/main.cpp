#include <iostream>

// include glm
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

void glm_vec_test();
void glm_mat_test();
void glm_transform_test();

std::ostream &operator<< (std::ostream&, const glm::mat4);
std::ostream &operator<< (std::ostream&, const glm::vec3);
std::ostream &operator<< (std::ostream&, const glm::vec4);

int main()
{
  glm_vec_test();
  glm_mat_test();
  glm_transform_test();

  return  0;
}

void glm_vec_test() {
  std::cout << "---------------" << std::endl;
  std::cout << "glm vector test" << std::endl;
  std::cout << "---------------" << std::endl;
  
  glm::vec3 x;
  glm::vec3 y;
  glm::vec3 z;
  float dot;
  
  // TODO 1)
  std::cout << "x = " << x << std::endl; 

  // TODO 2)
  std::cout << "y = " << y << std::endl; 

  // TODO 3)
  std::cout << "y += x" << std::endl;
  std::cout << "y => " << y << std::endl;
  std::cout << "x => " << x << std::endl;

  // TODO 4)
  std::cout << "dot(x,y) => " << dot << std::endl;

  // TODO 5)
  std::cout << "reset x as [1, 0, 0]" << std::endl;
  std::cout << "reset y as [0, 1, 0]" << std::endl;
  std::cout << "z = cross(x, y)" << std::endl;
  std::cout << "z = " << z << std::endl;
}

void glm_mat_test() {
  std::cout << std::endl;
  std::cout << "---------------" << std::endl;
  std::cout << "glm matrix test" << std::endl;
  std::cout << "---------------" << std::endl;

  glm::mat4 A;
  glm::mat4 B;

  // TODO 6) construct identity matrix
  std::cout << A << std::endl;

  // TODO 7)
  // Notice: The matrix is column major

  std::cout << "A = " << std::endl;
  std::cout << A << std::endl;  

  // TODO 8)
  std::cout << "B = A^T" << std::endl;
  std::cout << "B = " << std::endl;
  std::cout << B << std::endl;

  glm::vec4 x(1.0f, 0.0f, 0.0f, 0.0f);
  glm::vec4 y(0.0f, 1.0f, 0.0f, 0.0f);
  glm::vec4 z(0.0f, 0.0f, 1.0f, 0.0f);
  glm::vec4 w(0.0f, 0.0f, 0.0f, 1.0f);

  std::cout << "A*x = " << A * x << std::endl;
  std::cout << "A*y = " << A * y << std::endl;
  std::cout << "A*z = " << A * z << std::endl;
  std::cout << "A*w = " << A * w << std::endl;

  std::cout << "x*A = " << x * A << std::endl;
  std::cout << "y*A = " << y * A << std::endl;
  std::cout << "z*A = " << z * A << std::endl;
  std::cout << "w*A = " << w * A << std::endl;
}

void glm_transform_test() {
  std::cout << std::endl;
  std::cout << "------------------" << std::endl;
  std::cout << "glm transform test" << std::endl;
  std::cout << "------------------" << std::endl;

  glm::mat4 mat_Translate;
  glm::mat4 mat_Scale;
  glm::mat4 mat_Rotate;
  glm::mat4 mat_LookAt;
  glm::mat4 mat_Ortho;
  glm::mat4 mat_Frustum;
  glm::mat4 mat_Perspective;
  
  // TODO 9)

  // DO NOT EDIT below this line
  std::cout << "Translation matrix" << std::endl;
  std::cout << mat_Translate << std::endl;

  std::cout << "Rotation matrix" << std::endl;
  std::cout << mat_Rotate << std::endl;

  std::cout << "Scaling matrix" << std::endl;
  std::cout << mat_Scale << std::endl;

  std::cout << "View matrix with lookAt()" << std::endl;
  std::cout << mat_LookAt << std::endl;

  std::cout << "Projection matrix with ortho()" << std::endl;
  std::cout << mat_Ortho << std::endl;

  std::cout << "Projection matrix with frustum()" << std::endl;
  std::cout << mat_Frustum << std::endl;

  std::cout << "Projection matrix with perspective()" << std::endl;
  std::cout << mat_Perspective << std::endl;

}

// DO NOT EDIT below this line
std::ostream &operator<< (std::ostream &os, const glm::vec3 v) {
  os << "[";
  os << v.x << ", " << v.y << ", " << v.z;
  os << "]";
  
  return os;
}
std::ostream &operator<< (std::ostream &os, const glm::vec4 v) {
  os << "[";
  os << v.x << ", " << v.y << ", " << v.z << ", " << v.w;
  os << "]";
  
  return os;
}
std::ostream &operator<< (std::ostream &os, const glm::mat4 m) {
  os << "[" << m[0][0] << ", " << m[1][0] << ", " << m[2][0] << ", " << m[3][0] << "]" << std::endl;
  os << "[" << m[0][1] << ", " << m[1][1] << ", " << m[2][1] << ", " << m[3][1] << "]" << std::endl;
  os << "[" << m[0][2] << ", " << m[1][2] << ", " << m[2][2] << ", " << m[3][2] << "]" << std::endl;
  os << "[" << m[0][3] << ", " << m[1][3] << ", " << m[2][3] << ", " << m[3][3] << "]" << std::endl;
  
  return os;
}
