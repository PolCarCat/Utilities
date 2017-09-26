
#include <cmath>

template <class TYPE>

class vec3
{

	TYPE x, y, z;

public:

	vec3(TYPE x1, TYPE y1, TYPE z1) {
		x = x1;
		y = y1;
		z = z1;
	}
	~vec3(){
	}


	vec3 operator +(const vec3 vec)
	{
		vec3 ret
		{
		x + vec.x,
		y + vec.y,
		z + vec.z,
		};
		
		return *ret;
	}
	vec3 operator -(const vec3 vec)
	{
		vec3 ret
		{
		x - vec.x,
		y - vec.y,
		z - vec.z
		};
		return ret;
	}
	vec3& operator +=(const vec3 vec)
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;
		return *this;

	}
	vec3& operator -=(const vec3 vec)
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		return *this;
	}
	vec3& operator =(const vec3 vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}
	bool operator == (const vec3 vec)
	{
		bool ret = false;
		if (x == vec.x && y == vec.y && z = vec.z)
		{
			ret = true;
		}
		return ret;
	}

	vec3 Normalise() {
		float module = sqrt(x*x + y*y + z * z);
		vec3<float> aux
		{
		(float) x / module,
		(float) y / module,
		(float) z / module
		}

		return aux;
	}
	vec3 Zero() {
		
		vec3<float> aux{ 0,0,0 };

		return aux;
	}
	bool isZero()
	{
		return this == {0, 0, 0};
	}
	float distance(const vec3 vec)
	{
		vec3 aux = *this - vec;
		float module = sqrt(aux.x*aux.x + aux.y*aux.y + aux.z * aux.z);

		return module;
	}

};

