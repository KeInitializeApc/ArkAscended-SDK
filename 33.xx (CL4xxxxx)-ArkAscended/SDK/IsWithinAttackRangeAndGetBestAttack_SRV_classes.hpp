#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x168 - 0x98)
// BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C
class UIsWithinAttackRangeAndGetBestAttack_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                IsWithinAttackRangeKey;                            // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Last_Check_Attack_Range_Closest_Point_Key;         // 0xC8(0x28)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Use_Altenate_Move_Point;                           // 0xF0(0x28)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                BestAttackIndexKey;                                // 0x118(0x28)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                AttackIntervalKey;                                 // 0x140(0x28)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsWithinAttackRangeAndGetBestAttack_SRV_C* GetDefaultObj();

	float UpdateBlackboardKeys(class APrimalDinoAIController** OwnerController, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess);
	void ReceiveTick(class AActor** OwnerActor, float DeltaSeconds);
	int32 ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


