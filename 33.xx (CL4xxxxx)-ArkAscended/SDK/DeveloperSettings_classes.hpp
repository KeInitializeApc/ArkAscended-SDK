#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class DeveloperSettings.DeveloperSettings
class UDeveloperSettings : public UObject
{
public:
	uint8                                        Pad_CD[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDeveloperSettings* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class DeveloperSettings.DeveloperSettingsBackedByCVars
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UDeveloperSettingsBackedByCVars* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class DeveloperSettings.PlatformSettings
class UPlatformSettings : public UObject
{
public:
	uint8                                        Pad_D2[0x18];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlatformSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class DeveloperSettings.PlatformSettingsManager
class UPlatformSettingsManager : public UObject
{
public:
	TMap<class UClass*, struct FPlatformSettingsInstances> SettingsMap;                                       // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D5[0x8];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlatformSettingsManager* GetDefaultObj();

};

}


