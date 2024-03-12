#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x110 - 0xA8)
// BlueprintGeneratedClass GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C
class UGetPointBehindParentAwayFromAttacker_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       FixedDistance;                                     // 0xB0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       RandomDistance;                                    // 0xB8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xC0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetActor;                             // 0xE8(0x28)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UGetPointBehindParentAwayFromAttacker_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	bool ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(int32* EntryPoint, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, class APrimalDinoCharacter* CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue);
};

}


