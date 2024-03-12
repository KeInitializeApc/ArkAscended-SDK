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
	TArray<class UPlatformSettings*>             Settings;                                          // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct DeveloperSettings.PlatformSettingsInstances
struct FPlatformSettingsInstances
{
public:
	class UPlatformSettings*                     PlatformInstance;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, class UPlatformSettings*>  OtherPlatforms;                                    // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


