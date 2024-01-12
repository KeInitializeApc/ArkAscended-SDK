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

	float BPAdjustHarvestingDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, double OutgoingDamage, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, double K2Node_VariableSet_OutgoingDamage_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
};

}


