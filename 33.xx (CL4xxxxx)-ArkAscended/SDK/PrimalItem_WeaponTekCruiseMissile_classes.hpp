#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C
class UPrimalItem_WeaponTekCruiseMissile_C : public UPrimalItem_CruiseMissile
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTekCruiseMissile_C* GetDefaultObj();

	class AShooterCharacter* BPProcessEditText(class AShooterPlayerController** ForPC, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess);
	TArray<double> Set_Scout_Character_Status_Values();
	void Missile_Released_Possessing_Survivor(bool Delay_for_zoom_out, class AWeapTekCruiseMissile_Base_C* K2Node_DynamicCast_AsWeap_Tek_Cruise_Missile_Base, bool* K2Node_DynamicCast_bSuccess);
	void Missile_Possessed_by_Survivor();
};

}


