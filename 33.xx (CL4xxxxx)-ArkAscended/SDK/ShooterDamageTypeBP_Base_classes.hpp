#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x179 - 0x168)
// BlueprintGeneratedClass ShooterDamageTypeBP_Base.ShooterDamageTypeBP_Base_C
class UShooterDamageTypeBP_Base_C : public UShooterDamageType
{
public:
	bool                                         bCauseRaidTorpor;                                  // 0x168(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3142[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       RaidTorporDamageMultiplier;                        // 0x170(0x8)(ConstParm, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bKnockRaft;                                        // 0x178(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UShooterDamageTypeBP_Base_C* GetDefaultObj();

};

}


