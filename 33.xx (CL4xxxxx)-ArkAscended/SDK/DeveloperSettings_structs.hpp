#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct DeveloperSettings.PerPlatformSettings
struct FPerPlatformSettings
{
public:
	TArray<class UPlatformSettings*>             Settings;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct DeveloperSettings.PlatformSettingsInstances
struct FPlatformSettingsInstances
{
public:
	class UPlatformSettings*                     PlatformInstance;                                  // 0x0(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TMap<class FName, class UPlatformSettings*>  OtherPlatforms;                                    // 0x8(0x50)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
};

}


