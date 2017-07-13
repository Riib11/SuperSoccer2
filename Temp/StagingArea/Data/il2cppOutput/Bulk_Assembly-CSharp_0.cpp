#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_BallController3274667633.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_GameController3607102586.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_Player1Controller3798465848.h"
#include "AssemblyU2DCSharp_Player2Controller3685456855.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ScoreController1938732650.h"
#include "AssemblyU2DCSharp_GoalController818033147.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "UnityEngine_UnityEngine_RigidbodyConstraints2D1256536801.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"

// BallController
struct BallController_t3274667633;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// GameController
struct GameController_t3607102586;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// Player1Controller
struct Player1Controller_t3798465848;
// Player2Controller
struct Player2Controller_t3685456855;
// ScoreController
struct ScoreController_t1938732650;
// GoalController
struct GoalController_t818033147;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.UI.Text
struct Text_t356221433;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t BallController_Start_m2246481500_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPlayer1Controller_t3798465848_m1025112953_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPlayer2Controller_t3685456855_m2756517012_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBallController_t3274667633_m3316120728_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisScoreController_t1938732650_m2403556031_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3771843626;
extern Il2CppCodeGenString* _stringLiteral3771843629;
extern Il2CppCodeGenString* _stringLiteral405905523;
extern Il2CppCodeGenString* _stringLiteral2247053792;
extern const uint32_t GameController_Score_m4135352678_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisGameController_t3607102586_m57617221_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral40213808;
extern const uint32_t GoalController_OnCollisionEnter2D_m1629222652_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var;
extern const uint32_t Player1Controller_Start_m2732729853_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* RigidbodyConstraints2D_t1256536801_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1695925803;
extern const uint32_t Player1Controller_FixedUpdate_m1271253824_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var;
extern const uint32_t Player1Controller_OnCollisionEnter2D_m2145928247_MetadataUsageId;
extern const uint32_t Player2Controller_Start_m3154181148_MetadataUsageId;
extern const uint32_t Player2Controller_FixedUpdate_m2695772929_MetadataUsageId;
extern const uint32_t Player2Controller_OnCollisionEnter2D_m1252416602_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var;
extern const uint32_t ScoreController_Start_m425734171_MetadataUsageId;



// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2243707579  Vector2_get_zero_m3966848876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m3592751374 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Player1Controller>()
#define GameObject_GetComponent_TisPlayer1Controller_t3798465848_m1025112953(__this, method) ((  Player1Controller_t3798465848 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void Player1Controller::Reset()
extern "C"  void Player1Controller_Reset_m723151104 (Player1Controller_t3798465848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Player2Controller>()
#define GameObject_GetComponent_TisPlayer2Controller_t3685456855_m2756517012(__this, method) ((  Player2Controller_t3685456855 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void Player2Controller::Reset()
extern "C"  void Player2Controller_Reset_m1144596323 (Player2Controller_t3685456855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<BallController>()
#define GameObject_GetComponent_TisBallController_t3274667633_m3316120728(__this, method) ((  BallController_t3274667633 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void BallController::Reset()
extern "C"  void BallController_Reset_m760607085 (BallController_t3274667633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<ScoreController>()
#define GameObject_GetComponent_TisScoreController_t1938732650_m2403556031(__this, method) ((  ScoreController_t1938732650 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void ScoreController::AddOne()
extern "C"  void ScoreController_AddOne_m3029642368 (ScoreController_t1938732650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t1756533147 * Collision2D_get_gameObject_m4234358314 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m2079638459 (Object_t1021602117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<GameController>()
#define GameObject_GetComponent_TisGameController_t3607102586_m57617221(__this, method) ((  GameController_t3607102586 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void GameController::Score(System.Int32)
extern "C"  void GameController_Score_m4135352678 (GameController_t3607102586 * __this, int32_t ___team0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t69676727_m475627522(__this, method) ((  Animator_t69676727 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3849524999 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3067419446 (Vector2_t2243707579 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m3200488178 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C"  void Animator_SetInteger_m528582597 (Animator_t69676727 * __this, String_t* p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RigidbodyConstraints2D UnityEngine.Rigidbody2D::get_constraints()
extern "C"  int32_t Rigidbody2D_get_constraints_m256029512 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
extern "C"  void Rigidbody2D_set_constraints_m1595222955 (Rigidbody2D_t502193897 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t4030073918  Quaternion_Euler_m2887458175 (Il2CppObject * __this /* static, unused */, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Transform_SetPositionAndRotation_m1311398055 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, Quaternion_t4030073918  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
extern "C"  Collider2D_t646061738 * Collision2D_get_collider_m3330356936 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(__this, method) ((  Rigidbody2D_t502193897 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2243707579  Rigidbody2D_get_velocity_m3310151195 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m33802565 (Vector2_t2243707579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t356221433_m1342661039(__this, method) ((  Text_t356221433 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallController::.ctor()
extern "C"  void BallController__ctor_m2206749540 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::Start()
extern "C"  void BallController_Start_m2246481500 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_Start_m2246481500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		__this->set_startposition_2(L_1);
		Rigidbody2D_t502193897 * L_2 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rb_3(L_2);
		return;
	}
}
// System.Void BallController::Reset()
extern "C"  void BallController_Reset_m760607085 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = __this->get_startposition_2();
		Transform_set_position_m2469242620(L_0, L_1, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_2 = __this->get_rb_3();
		Vector2_t2243707579  L_3 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m1439649957 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Score(System.Int32)
extern "C"  void GameController_Score_m4135352678 (GameController_t3607102586 * __this, int32_t ___team0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Score_m4135352678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral3771843626, /*hidden argument*/NULL);
		Player1Controller_t3798465848 * L_1 = GameObject_GetComponent_TisPlayer1Controller_t3798465848_m1025112953(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayer1Controller_t3798465848_m1025112953_MethodInfo_var);
		Player1Controller_Reset_m723151104(L_1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral3771843629, /*hidden argument*/NULL);
		Player2Controller_t3685456855 * L_3 = GameObject_GetComponent_TisPlayer2Controller_t3685456855_m2756517012(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayer2Controller_t3685456855_m2756517012_MethodInfo_var);
		Player2Controller_Reset_m1144596323(L_3, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_4 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral405905523, /*hidden argument*/NULL);
		BallController_t3274667633 * L_5 = GameObject_GetComponent_TisBallController_t3274667633_m3316120728(L_4, /*hidden argument*/GameObject_GetComponent_TisBallController_t3274667633_m3316120728_MethodInfo_var);
		BallController_Reset_m760607085(L_5, /*hidden argument*/NULL);
		String_t* L_6 = Int32_ToString_m2960866144((&___team0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral2247053792, L_6, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_8 = GameObject_Find_m836511350(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		ScoreController_t1938732650 * L_9 = GameObject_GetComponent_TisScoreController_t1938732650_m2403556031(L_8, /*hidden argument*/GameObject_GetComponent_TisScoreController_t1938732650_m2403556031_MethodInfo_var);
		ScoreController_AddOne_m3029642368(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoalController::.ctor()
extern "C"  void GoalController__ctor_m838557678 (GoalController_t818033147 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoalController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void GoalController_OnCollisionEnter2D_m1629222652 (GoalController_t818033147 * __this, Collision2D_t1539500754 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoalController_OnCollisionEnter2D_m1629222652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t1539500754 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral405905523, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		GameObject_t1756533147 * L_4 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral40213808, /*hidden argument*/NULL);
		GameController_t3607102586 * L_5 = GameObject_GetComponent_TisGameController_t3607102586_m57617221(L_4, /*hidden argument*/GameObject_GetComponent_TisGameController_t3607102586_m57617221_MethodInfo_var);
		int32_t L_6 = __this->get_team_2();
		GameController_Score_m4135352678(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void Player1Controller::.ctor()
extern "C"  void Player1Controller__ctor_m4270002141 (Player1Controller_t3798465848 * __this, const MethodInfo* method)
{
	{
		__this->set_moveSpeed_2((10.0f));
		__this->set_boosterForce_3((20.0f));
		__this->set_diveForce_4((150.0f));
		__this->set_kickForce_5((100.0f));
		__this->set_currentDirection_7((-1));
		__this->set_KEY_LEFT_8(((int32_t)97));
		__this->set_KEY_RIGHT_9(((int32_t)100));
		__this->set_KEY_UP_10(((int32_t)119));
		__this->set_KEY_DIVE_11(((int32_t)304));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player1Controller::Start()
extern "C"  void Player1Controller_Start_m2732729853 (Player1Controller_t3798465848 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player1Controller_Start_m2732729853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t69676727 * L_0 = Component_GetComponent_TisAnimator_t69676727_m475627522(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var);
		__this->set_animator_12(L_0);
		Rigidbody2D_t502193897 * L_1 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rb_13(L_1);
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		__this->set_startposition_14(L_3);
		return;
	}
}
// System.Void Player1Controller::FixedUpdate()
extern "C"  void Player1Controller_FixedUpdate_m1271253824 (Player1Controller_t3798465848 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player1Controller_FixedUpdate_m1271253824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->get_KEY_LEFT_8();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m3849524999(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		__this->set_currentState_6(2);
		__this->set_currentDirection_7((-1));
		Rigidbody2D_t502193897 * L_2 = __this->get_rb_13();
		float L_3 = __this->get_moveSpeed_2();
		Vector2_t2243707579  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3067419446(&L_4, ((-L_3)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_2, L_4, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_003f:
	{
		int32_t L_5 = __this->get_KEY_RIGHT_9();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKey_m3849524999(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007d;
		}
	}
	{
		__this->set_currentState_6(1);
		__this->set_currentDirection_7(1);
		Rigidbody2D_t502193897 * L_7 = __this->get_rb_13();
		float L_8 = __this->get_moveSpeed_2();
		Vector2_t2243707579  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3067419446(&L_9, L_8, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_7, L_9, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_007d:
	{
		int32_t L_10 = __this->get_currentDirection_7();
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0095;
		}
	}
	{
		__this->set_currentState_6(3);
		goto IL_009c;
	}

IL_0095:
	{
		__this->set_currentState_6(4);
	}

IL_009c:
	{
		Animator_t69676727 * L_11 = __this->get_animator_12();
		int32_t L_12 = __this->get_currentState_6();
		Animator_SetInteger_m528582597(L_11, _stringLiteral1695925803, L_12, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_KEY_UP_10();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetKey_m3849524999(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00dd;
		}
	}
	{
		Rigidbody2D_t502193897 * L_15 = __this->get_rb_13();
		float L_16 = __this->get_boosterForce_3();
		Vector2_t2243707579  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector2__ctor_m3067419446(&L_17, (0.0f), L_16, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_15, L_17, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		int32_t L_18 = __this->get_KEY_DIVE_11();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_018f;
		}
	}
	{
		Rigidbody2D_t502193897 * L_20 = __this->get_rb_13();
		int32_t L_21 = Rigidbody2D_get_constraints_m256029512(L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		int32_t L_22 = ((int32_t)4);
		Il2CppObject * L_23 = Box(RigidbodyConstraints2D_t1256536801_il2cpp_TypeInfo_var, &L_22);
		Il2CppObject * L_24 = Box(RigidbodyConstraints2D_t1256536801_il2cpp_TypeInfo_var, (&V_0));
		bool L_25 = VirtFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_24, L_23);
		if (!L_25)
		{
			goto IL_0159;
		}
	}
	{
		Rigidbody2D_t502193897 * L_26 = __this->get_rb_13();
		Rigidbody2D_set_constraints_m1595222955(L_26, 0, /*hidden argument*/NULL);
		float L_27 = __this->get_diveForce_4();
		V_1 = L_27;
		float L_28 = V_1;
		if ((!(((float)L_28) == ((float)(0.0f)))))
		{
			goto IL_0135;
		}
	}
	{
		V_1 = (100.0f);
	}

IL_0135:
	{
		Rigidbody2D_t502193897 * L_29 = __this->get_rb_13();
		float L_30 = __this->get_diveForce_4();
		int32_t L_31 = __this->get_currentDirection_7();
		float L_32 = V_1;
		Vector2_t2243707579  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector2__ctor_m3067419446(&L_33, ((float)((float)L_30*(float)(((float)((float)L_31))))), L_32, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_29, L_33, /*hidden argument*/NULL);
		goto IL_018f;
	}

IL_0159:
	{
		Transform_t3275118058 * L_34 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_35 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_36 = Transform_get_position_m1104419803(L_35, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_37 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_SetPositionAndRotation_m1311398055(L_34, L_36, L_37, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_38 = __this->get_rb_13();
		Rigidbody2D_set_constraints_m1595222955(L_38, 4, /*hidden argument*/NULL);
	}

IL_018f:
	{
		return;
	}
}
// System.Void Player1Controller::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Player1Controller_OnCollisionEnter2D_m2145928247 (Player1Controller_t3798465848 * __this, Collision2D_t1539500754 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player1Controller_OnCollisionEnter2D_m2145928247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collision2D_t1539500754 * L_0 = ___col0;
		Collider2D_t646061738 * L_1 = Collision2D_get_collider_m3330356936(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral405905523, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		Collision2D_t1539500754 * L_4 = ___col0;
		Collider2D_t646061738 * L_5 = Collision2D_get_collider_m3330356936(L_4, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_6 = Component_get_gameObject_m3105766835(L_5, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_7 = GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var);
		Rigidbody2D_t502193897 * L_8 = __this->get_rb_13();
		Vector2_t2243707579  L_9 = Rigidbody2D_get_velocity_m3310151195(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = (&V_0)->get_x_0();
		float L_11 = __this->get_kickForce_5();
		Rigidbody2D_t502193897 * L_12 = __this->get_rb_13();
		Vector2_t2243707579  L_13 = Rigidbody2D_get_velocity_m3310151195(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = Vector2_get_magnitude_m33802565((&V_1), /*hidden argument*/NULL);
		float L_15 = __this->get_kickForce_5();
		Vector2_t2243707579  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector2__ctor_m3067419446(&L_16, ((float)((float)((float)((float)L_10*(float)L_11))/(float)(2.0f))), ((float)((float)L_14*(float)L_15)), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_7, L_16, /*hidden argument*/NULL);
	}

IL_006e:
	{
		return;
	}
}
// System.Void Player1Controller::Reset()
extern "C"  void Player1Controller_Reset_m723151104 (Player1Controller_t3798465848 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = __this->get_startposition_14();
		Transform_set_position_m2469242620(L_0, L_1, /*hidden argument*/NULL);
		__this->set_currentState_6(1);
		Rigidbody2D_t502193897 * L_2 = __this->get_rb_13();
		Vector2_t2243707579  L_3 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_2, L_3, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_7 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_SetPositionAndRotation_m1311398055(L_4, L_6, L_7, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_8 = __this->get_rb_13();
		Rigidbody2D_set_constraints_m1595222955(L_8, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2Controller::.ctor()
extern "C"  void Player2Controller__ctor_m396484288 (Player2Controller_t3685456855 * __this, const MethodInfo* method)
{
	{
		__this->set_moveSpeed_2((10.0f));
		__this->set_boosterForce_3((20.0f));
		__this->set_diveForce_4((150.0f));
		__this->set_kickForce_5((100.0f));
		__this->set_currentDirection_7((-1));
		__this->set_KEY_LEFT_8(((int32_t)276));
		__this->set_KEY_RIGHT_9(((int32_t)275));
		__this->set_KEY_UP_10(((int32_t)273));
		__this->set_KEY_DIVE_11(((int32_t)309));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player2Controller::Start()
extern "C"  void Player2Controller_Start_m3154181148 (Player2Controller_t3685456855 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player2Controller_Start_m3154181148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t69676727 * L_0 = Component_GetComponent_TisAnimator_t69676727_m475627522(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var);
		__this->set_animator_12(L_0);
		Rigidbody2D_t502193897 * L_1 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rb_13(L_1);
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		__this->set_startposition_14(L_3);
		return;
	}
}
// System.Void Player2Controller::FixedUpdate()
extern "C"  void Player2Controller_FixedUpdate_m2695772929 (Player2Controller_t3685456855 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player2Controller_FixedUpdate_m2695772929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->get_KEY_LEFT_8();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m3849524999(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		__this->set_currentState_6(2);
		__this->set_currentDirection_7((-1));
		Rigidbody2D_t502193897 * L_2 = __this->get_rb_13();
		float L_3 = __this->get_moveSpeed_2();
		Vector2_t2243707579  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3067419446(&L_4, ((-L_3)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_2, L_4, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_003f:
	{
		int32_t L_5 = __this->get_KEY_RIGHT_9();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKey_m3849524999(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007d;
		}
	}
	{
		__this->set_currentState_6(1);
		__this->set_currentDirection_7(1);
		Rigidbody2D_t502193897 * L_7 = __this->get_rb_13();
		float L_8 = __this->get_moveSpeed_2();
		Vector2_t2243707579  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3067419446(&L_9, L_8, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_7, L_9, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_007d:
	{
		int32_t L_10 = __this->get_currentDirection_7();
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0095;
		}
	}
	{
		__this->set_currentState_6(3);
		goto IL_009c;
	}

IL_0095:
	{
		__this->set_currentState_6(4);
	}

IL_009c:
	{
		Animator_t69676727 * L_11 = __this->get_animator_12();
		int32_t L_12 = __this->get_currentState_6();
		Animator_SetInteger_m528582597(L_11, _stringLiteral1695925803, L_12, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_KEY_UP_10();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetKey_m3849524999(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00dd;
		}
	}
	{
		Rigidbody2D_t502193897 * L_15 = __this->get_rb_13();
		float L_16 = __this->get_boosterForce_3();
		Vector2_t2243707579  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector2__ctor_m3067419446(&L_17, (0.0f), L_16, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_15, L_17, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		int32_t L_18 = __this->get_KEY_DIVE_11();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_018f;
		}
	}
	{
		Rigidbody2D_t502193897 * L_20 = __this->get_rb_13();
		int32_t L_21 = Rigidbody2D_get_constraints_m256029512(L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		int32_t L_22 = ((int32_t)4);
		Il2CppObject * L_23 = Box(RigidbodyConstraints2D_t1256536801_il2cpp_TypeInfo_var, &L_22);
		Il2CppObject * L_24 = Box(RigidbodyConstraints2D_t1256536801_il2cpp_TypeInfo_var, (&V_0));
		bool L_25 = VirtFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_24, L_23);
		if (!L_25)
		{
			goto IL_0159;
		}
	}
	{
		Rigidbody2D_t502193897 * L_26 = __this->get_rb_13();
		Rigidbody2D_set_constraints_m1595222955(L_26, 0, /*hidden argument*/NULL);
		float L_27 = __this->get_diveForce_4();
		V_1 = L_27;
		float L_28 = V_1;
		if ((!(((float)L_28) == ((float)(0.0f)))))
		{
			goto IL_0135;
		}
	}
	{
		V_1 = (100.0f);
	}

IL_0135:
	{
		Rigidbody2D_t502193897 * L_29 = __this->get_rb_13();
		float L_30 = __this->get_diveForce_4();
		int32_t L_31 = __this->get_currentDirection_7();
		float L_32 = V_1;
		Vector2_t2243707579  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector2__ctor_m3067419446(&L_33, ((float)((float)L_30*(float)(((float)((float)L_31))))), L_32, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_29, L_33, /*hidden argument*/NULL);
		goto IL_018f;
	}

IL_0159:
	{
		Transform_t3275118058 * L_34 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_35 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_36 = Transform_get_position_m1104419803(L_35, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_37 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_SetPositionAndRotation_m1311398055(L_34, L_36, L_37, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_38 = __this->get_rb_13();
		Rigidbody2D_set_constraints_m1595222955(L_38, 4, /*hidden argument*/NULL);
	}

IL_018f:
	{
		return;
	}
}
// System.Void Player2Controller::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Player2Controller_OnCollisionEnter2D_m1252416602 (Player2Controller_t3685456855 * __this, Collision2D_t1539500754 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player2Controller_OnCollisionEnter2D_m1252416602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collision2D_t1539500754 * L_0 = ___col0;
		Collider2D_t646061738 * L_1 = Collision2D_get_collider_m3330356936(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral405905523, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		Collision2D_t1539500754 * L_4 = ___col0;
		Collider2D_t646061738 * L_5 = Collision2D_get_collider_m3330356936(L_4, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_6 = Component_get_gameObject_m3105766835(L_5, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_7 = GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var);
		Rigidbody2D_t502193897 * L_8 = __this->get_rb_13();
		Vector2_t2243707579  L_9 = Rigidbody2D_get_velocity_m3310151195(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = (&V_0)->get_x_0();
		float L_11 = __this->get_kickForce_5();
		Rigidbody2D_t502193897 * L_12 = __this->get_rb_13();
		Vector2_t2243707579  L_13 = Rigidbody2D_get_velocity_m3310151195(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = Vector2_get_magnitude_m33802565((&V_1), /*hidden argument*/NULL);
		float L_15 = __this->get_kickForce_5();
		Vector2_t2243707579  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector2__ctor_m3067419446(&L_16, ((float)((float)((float)((float)L_10*(float)L_11))/(float)(2.0f))), ((float)((float)L_14*(float)L_15)), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m3200488178(L_7, L_16, /*hidden argument*/NULL);
	}

IL_006e:
	{
		return;
	}
}
// System.Void Player2Controller::Reset()
extern "C"  void Player2Controller_Reset_m1144596323 (Player2Controller_t3685456855 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = __this->get_startposition_14();
		Transform_set_position_m2469242620(L_0, L_1, /*hidden argument*/NULL);
		__this->set_currentState_6(1);
		Rigidbody2D_t502193897 * L_2 = __this->get_rb_13();
		Vector2_t2243707579  L_3 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_2, L_3, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_7 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_SetPositionAndRotation_m1311398055(L_4, L_6, L_7, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_8 = __this->get_rb_13();
		Rigidbody2D_set_constraints_m1595222955(L_8, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::.ctor()
extern "C"  void ScoreController__ctor_m907446087 (ScoreController_t1938732650 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreController::Start()
extern "C"  void ScoreController_Start_m425734171 (ScoreController_t1938732650 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_Start_m425734171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = Component_GetComponent_TisText_t356221433_m1342661039(__this, /*hidden argument*/Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var);
		__this->set_text_3(L_0);
		return;
	}
}
// System.Void ScoreController::AddOne()
extern "C"  void ScoreController_AddOne_m3029642368 (ScoreController_t1938732650 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_score_2();
		__this->set_score_2(((int32_t)((int32_t)L_0+(int32_t)1)));
		return;
	}
}
// System.Void ScoreController::Update()
extern "C"  void ScoreController_Update_m2547870996 (ScoreController_t1938732650 * __this, const MethodInfo* method)
{
	{
		Text_t356221433 * L_0 = __this->get_text_3();
		int32_t* L_1 = __this->get_address_of_score_2();
		String_t* L_2 = Int32_ToString_m2960866144(L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
