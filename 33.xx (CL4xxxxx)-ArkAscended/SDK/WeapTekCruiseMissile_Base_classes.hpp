#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1180 - 0x1178)
// BlueprintGeneratedClass WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C
class AWeapTekCruiseMissile_Base_C : public AShooterWeapon_Projectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1178(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapTekCruiseMissile_Base_C* GetDefaultObj();

	void Delay_break_and_iron_out(bool Delay_for_zoom_out);
	void ExecuteUbergraph_WeapTekCruiseMissile_Base(int32* EntryPoint, bool K2Node_CustomEvent_delay_for_zoom_out);
};

}


