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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                IsWithinAttackRangeKey;                            // 0xA0(0x28)(Net, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBlackboardKeySelector                Last_Check_Attack_Range_Closest_Point_Key;         // 0xC8(0x28)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBlackboardKeySelector                Use_Altenate_Move_Point;                           // 0xF0(0x28)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBlackboardKeySelector                BestAttackIndexKey;                                // 0x118(0x28)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBlackboardKeySelector                AttackIntervalKey;                                 // 0x140(0x28)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsWithinAttackRangeAndGetBestAttack_SRV_C* GetDefaultObj();

	float UpdateBlackboardKeys(class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController);
	float ReceiveTick(class AActor** OwnerActor);
	float ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged, bool* CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue, uint8* CallFunc_GetCurrentAttackIndex_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32* CallFunc_Conv_ByteToInt_ReturnValue);
};

}


