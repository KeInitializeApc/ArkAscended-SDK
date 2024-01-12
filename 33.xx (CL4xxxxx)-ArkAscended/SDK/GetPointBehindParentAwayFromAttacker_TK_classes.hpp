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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       FixedDistance;                                     // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	double                                       RandomDistance;                                    // 0xB8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xC0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetActor;                             // 0xE8(0x28)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UGetPointBehindParentAwayFromAttacker_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	class APrimalDinoCharacter* ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class AActor** CallFunc_GetTarget_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue);
};

}


