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
	uint8                                        Pad_F7F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MaxEnflameWeight;                                  // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C* GetDefaultObj();

	double OverrideBuffToGiveVictimCharacter(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class UClass* ReturnValue, class UClass** OutVal, bool* Temp_bool_Variable, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, TSoftClassPtr<class APrimalBuff>* K2Node_Select_Default, class UClass* CallFunc_ClassAssetResolve_ReturnValue);
};

}


