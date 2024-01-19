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
	bool                                         bCauseRaidTorpor;                                  // 0x168(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F3B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       RaidTorporDamageMultiplier;                        // 0x170(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bKnockRaft;                                        // 0x178(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UShooterDamageTypeBP_Base_C* GetDefaultObj();

};

}


