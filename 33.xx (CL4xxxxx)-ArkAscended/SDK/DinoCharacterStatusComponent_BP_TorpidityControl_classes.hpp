#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x10E9 - 0x10E8)
// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C
class UDinoCharacterStatusComponent_BP_TorpidityControl_C : public UDinoCharacterStatusComponent_BP_C
{
public:
	bool                                         bAllowTorpidityIncrease;                           // 0x10E8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDinoCharacterStatusComponent_BP_TorpidityControl_C* GetDefaultObj();

	float BPAdjustStatusValueModification(enum class EPrimalCharacterStatusValue* ValueType, float* Amount, class UClass** DamageTypeClass, bool bManualModification, double* RetVal, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess);
};

}


