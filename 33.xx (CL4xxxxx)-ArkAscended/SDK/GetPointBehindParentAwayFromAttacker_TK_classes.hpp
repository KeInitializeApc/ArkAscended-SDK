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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       FixedDistance;                                     // 0xB0(0x8)(ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	double                                       RandomDistance;                                    // 0xB8(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xC0(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetActor;                             // 0xE8(0x28)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UGetPointBehindParentAwayFromAttacker_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	bool ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter** CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue);
};

}


