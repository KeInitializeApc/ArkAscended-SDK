#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides             QualityOverrides[0x4];                             // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2929[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UShaderPlatformQualitySettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<class FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                 // 0x28(0x50)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMaterialShaderQualitySettings* GetDefaultObj();

};

}


