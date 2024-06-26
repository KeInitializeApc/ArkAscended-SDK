#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x150 - 0xA0)
// BlueprintGeneratedClass NotWithinDistance.NotWithinDistance_C
class UNotWithinDistance_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FBlackboardKeySelector                Range;                                             // 0xA8(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       RangeOffsetValue;                                  // 0xD0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FBlackboardKeySelector                ShouldFlyKey;                                      // 0xD8(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FBlackboardKeySelector                TargetBlackboardKey;                               // 0x100(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FBlackboardKeySelector                FollowStoppingDistanceKey;                         // 0x128(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UNotWithinDistance_C* GetDefaultObj();

	class AActor* ReceiveConditionCheck();
	void ExecuteUbergraph_NotWithinDistance(int32* EntryPoint, class AActor** K2Node_Event_OwnerActor, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTamedFollowTarget_ReturnValue, float CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool* CallFunc_CanFly_ReturnValue, float* CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double* CallFunc_Add_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_B_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2);
};

}


