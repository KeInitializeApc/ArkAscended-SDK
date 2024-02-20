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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       FixedDistance;                                     // 0xB0(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	double                                       RandomDistance;                                    // 0xB8(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xC0(0x28)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetActor;                             // 0xE8(0x28)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGetPointBehindParentAwayFromAttacker_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	class APrimalDinoCharacter* ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_IsValid_ReturnValue);
};

}


