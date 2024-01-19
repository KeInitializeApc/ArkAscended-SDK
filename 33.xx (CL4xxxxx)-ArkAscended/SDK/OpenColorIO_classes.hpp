#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// Class OpenColorIO.OpenColorIOSettings
class UOpenColorIOSettings : public UDeveloperSettings
{
public:
	uint8                                        bUseLegacyProcessor : 1;                           // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bUse32fLUT : 1;                                    // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportInverseViewTransforms : 1;                 // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_690[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIOSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OpenColorIO.OpenColorIOBlueprintLibrary
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOpenColorIOBlueprintLibrary* GetDefaultObj();

	void ApplyColorSpaceTransform(class UObject* WorldContextObject, struct FOpenColorIOColorConversionSettings* ConversionSettings, class UTexture** InputTexture, class UTextureRenderTarget2D** OutputRenderTarget, bool ReturnValue);
};

// 0x140 (0x168 - 0x28)
// Class OpenColorIO.OpenColorIOColorTransform
class UOpenColorIOColorTransform : public UObject
{
public:
	class UOpenColorIOConfiguration*             ConfigurationOwner;                                // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsDisplayViewType;                                // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_697[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SourceColorSpace;                                  // 0x38(0x10)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DestinationColorSpace;                             // 0x48(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Display;                                           // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                View;                                              // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
	enum class EOpenColorIOViewTransformDirection DisplayViewDirection;                              // 0x78(0x1)(Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_699[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<int32, class UTexture*>                 Textures;                                          // 0x80(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_69B[0x98];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIOColorTransform* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class OpenColorIO.OpenColorIOConfiguration
class UOpenColorIOConfiguration : public UObject
{
public:
	struct FFilePath                             ConfigurationFile;                                 // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig)
	TArray<struct FOpenColorIOColorSpace>        DesiredColorSpaces;                                // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FOpenColorIODisplayView>       DesiredDisplayViews;                               // 0x48(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UOpenColorIOColorTransform*>    ColorTransforms;                                   // 0x58(0x10)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6AB[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIOConfiguration* GetDefaultObj();

	void ReloadExistingColorspaces();
};

// 0x10 (0x38 - 0x28)
// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
class UOpenColorIODisplayExtensionWrapper : public UObject
{
public:
	uint8                                        Pad_6CB[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIODisplayExtensionWrapper* GetDefaultObj();

	void SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor>* IsActiveFunctions);
	void SetSceneExtensionIsActiveFunction(struct FSceneViewExtensionIsActiveFunctor* IsActiveFunction);
	void SetOpenColorIOConfiguration(struct FOpenColorIODisplayConfiguration* InDisplayConfiguration);
	void RemoveSceneExtension();
	void GetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& ReturnValue);
	void CreateOpenColorIODisplayExtension(struct FOpenColorIODisplayConfiguration* InDisplayConfiguration, struct FSceneViewExtensionIsActiveFunctor* IsActiveFunction, class UOpenColorIODisplayExtensionWrapper* ReturnValue);
	void CreateInGameOpenColorIODisplayExtension(struct FOpenColorIODisplayConfiguration* InDisplayConfiguration, class UOpenColorIODisplayExtensionWrapper* ReturnValue);
};

}


