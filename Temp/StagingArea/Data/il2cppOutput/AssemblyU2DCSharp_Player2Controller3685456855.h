#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player2Controller
struct  Player2Controller_t3685456855  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Player2Controller::moveSpeed
	float ___moveSpeed_2;
	// System.Single Player2Controller::boosterForce
	float ___boosterForce_3;
	// System.Single Player2Controller::diveForce
	float ___diveForce_4;
	// System.Single Player2Controller::kickForce
	float ___kickForce_5;
	// System.Int32 Player2Controller::currentState
	int32_t ___currentState_6;
	// System.Int32 Player2Controller::currentDirection
	int32_t ___currentDirection_7;
	// UnityEngine.KeyCode Player2Controller::KEY_LEFT
	int32_t ___KEY_LEFT_8;
	// UnityEngine.KeyCode Player2Controller::KEY_RIGHT
	int32_t ___KEY_RIGHT_9;
	// UnityEngine.KeyCode Player2Controller::KEY_UP
	int32_t ___KEY_UP_10;
	// UnityEngine.KeyCode Player2Controller::KEY_DIVE
	int32_t ___KEY_DIVE_11;
	// UnityEngine.Animator Player2Controller::animator
	Animator_t69676727 * ___animator_12;
	// UnityEngine.Rigidbody2D Player2Controller::rb
	Rigidbody2D_t502193897 * ___rb_13;
	// UnityEngine.Vector3 Player2Controller::startposition
	Vector3_t2243707580  ___startposition_14;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_boosterForce_3() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___boosterForce_3)); }
	inline float get_boosterForce_3() const { return ___boosterForce_3; }
	inline float* get_address_of_boosterForce_3() { return &___boosterForce_3; }
	inline void set_boosterForce_3(float value)
	{
		___boosterForce_3 = value;
	}

	inline static int32_t get_offset_of_diveForce_4() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___diveForce_4)); }
	inline float get_diveForce_4() const { return ___diveForce_4; }
	inline float* get_address_of_diveForce_4() { return &___diveForce_4; }
	inline void set_diveForce_4(float value)
	{
		___diveForce_4 = value;
	}

	inline static int32_t get_offset_of_kickForce_5() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___kickForce_5)); }
	inline float get_kickForce_5() const { return ___kickForce_5; }
	inline float* get_address_of_kickForce_5() { return &___kickForce_5; }
	inline void set_kickForce_5(float value)
	{
		___kickForce_5 = value;
	}

	inline static int32_t get_offset_of_currentState_6() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___currentState_6)); }
	inline int32_t get_currentState_6() const { return ___currentState_6; }
	inline int32_t* get_address_of_currentState_6() { return &___currentState_6; }
	inline void set_currentState_6(int32_t value)
	{
		___currentState_6 = value;
	}

	inline static int32_t get_offset_of_currentDirection_7() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___currentDirection_7)); }
	inline int32_t get_currentDirection_7() const { return ___currentDirection_7; }
	inline int32_t* get_address_of_currentDirection_7() { return &___currentDirection_7; }
	inline void set_currentDirection_7(int32_t value)
	{
		___currentDirection_7 = value;
	}

	inline static int32_t get_offset_of_KEY_LEFT_8() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___KEY_LEFT_8)); }
	inline int32_t get_KEY_LEFT_8() const { return ___KEY_LEFT_8; }
	inline int32_t* get_address_of_KEY_LEFT_8() { return &___KEY_LEFT_8; }
	inline void set_KEY_LEFT_8(int32_t value)
	{
		___KEY_LEFT_8 = value;
	}

	inline static int32_t get_offset_of_KEY_RIGHT_9() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___KEY_RIGHT_9)); }
	inline int32_t get_KEY_RIGHT_9() const { return ___KEY_RIGHT_9; }
	inline int32_t* get_address_of_KEY_RIGHT_9() { return &___KEY_RIGHT_9; }
	inline void set_KEY_RIGHT_9(int32_t value)
	{
		___KEY_RIGHT_9 = value;
	}

	inline static int32_t get_offset_of_KEY_UP_10() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___KEY_UP_10)); }
	inline int32_t get_KEY_UP_10() const { return ___KEY_UP_10; }
	inline int32_t* get_address_of_KEY_UP_10() { return &___KEY_UP_10; }
	inline void set_KEY_UP_10(int32_t value)
	{
		___KEY_UP_10 = value;
	}

	inline static int32_t get_offset_of_KEY_DIVE_11() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___KEY_DIVE_11)); }
	inline int32_t get_KEY_DIVE_11() const { return ___KEY_DIVE_11; }
	inline int32_t* get_address_of_KEY_DIVE_11() { return &___KEY_DIVE_11; }
	inline void set_KEY_DIVE_11(int32_t value)
	{
		___KEY_DIVE_11 = value;
	}

	inline static int32_t get_offset_of_animator_12() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___animator_12)); }
	inline Animator_t69676727 * get_animator_12() const { return ___animator_12; }
	inline Animator_t69676727 ** get_address_of_animator_12() { return &___animator_12; }
	inline void set_animator_12(Animator_t69676727 * value)
	{
		___animator_12 = value;
		Il2CppCodeGenWriteBarrier(&___animator_12, value);
	}

	inline static int32_t get_offset_of_rb_13() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___rb_13)); }
	inline Rigidbody2D_t502193897 * get_rb_13() const { return ___rb_13; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_13() { return &___rb_13; }
	inline void set_rb_13(Rigidbody2D_t502193897 * value)
	{
		___rb_13 = value;
		Il2CppCodeGenWriteBarrier(&___rb_13, value);
	}

	inline static int32_t get_offset_of_startposition_14() { return static_cast<int32_t>(offsetof(Player2Controller_t3685456855, ___startposition_14)); }
	inline Vector3_t2243707580  get_startposition_14() const { return ___startposition_14; }
	inline Vector3_t2243707580 * get_address_of_startposition_14() { return &___startposition_14; }
	inline void set_startposition_14(Vector3_t2243707580  value)
	{
		___startposition_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
