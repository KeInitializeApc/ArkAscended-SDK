#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xF38 - 0xEE0)
// BlueprintGeneratedClass PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C
class UPrimalItemConsumableMiracleGro_C : public UPrimalItemConsumableEatable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Max_Repopulation_Range;                            // 0xEF0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Max_Foliages_To_Repopulate;                        // 0xEF8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_56FD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               StructureDownTraceVector;                          // 0xF00(0x18)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               StructureUpTraceVector;                            // 0xF18(0x18)(ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                Repopulation_Emitter;                              // 0xF30(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumableMiracleGro_C* GetDefaultObj();

	void BlueprintUsed();
	float ExecuteUbergraph_PrimalItemConsumableMiracleGro(int32* EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess);
};

}


