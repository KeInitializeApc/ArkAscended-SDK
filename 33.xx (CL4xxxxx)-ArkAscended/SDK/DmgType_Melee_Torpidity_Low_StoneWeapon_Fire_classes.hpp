#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x188 - 0x179)
// BlueprintGeneratedClass DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C
class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C : public UDmgType_Melee_Torpidity_Low_StoneWeapon_C
{
public:
	uint8                                        Pad_4638[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaxEnflameWeight;                                  // 0x180(0x8)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C* GetDefaultObj();

	bool OverrideBuffToGiveVictimCharacter(class APrimalCharacter** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class UClass* OutVal, bool Temp_bool_Variable, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, TSoftClassPtr<class APrimalBuff>* K2Node_Select_Default, class UClass* CallFunc_ClassAssetResolve_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


