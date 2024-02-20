#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x179 - 0x179)
// BlueprintGeneratedClass DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag.DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C
class UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C : public UDmgType_Melee_Torpidity_None_StoneWeapon_C
{
public:

	static class UClass* StaticClass();
	static class UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C* GetDefaultObj();

	bool BPAdjustHarvestingDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, float ReturnValue, double* OutgoingDamage, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, double* K2Node_VariableSet_OutgoingDamage_ImplicitCast, float* K2Node_FunctionResult_ReturnValue_ImplicitCast);
};

}


