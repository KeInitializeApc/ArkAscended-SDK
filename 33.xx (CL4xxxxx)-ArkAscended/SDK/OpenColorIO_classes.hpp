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
	uint8                                        bUseLegacyProcessor : 1;                           // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bUse32fLUT : 1;                                    // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bSupportInverseViewTransforms : 1;                 // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_645[0x7];                                      // Fixing Size Of Struct > TateDumper <

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

	class UTextureRenderTarget2D* ApplyColorSpaceTransform(const struct FOpenColorIOColorConversionSettings& ConversionSettings, bool ReturnValue);
};

// 0x140 (0x168 - 0x28)
// Class OpenColorIO.OpenColorIOColorTransform
class UOpenColorIOColorTransform : public UObject
{
public:
	class UOpenColorIOConfiguration*             ConfigurationOwner;                                // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsDisplayViewType;                                // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_681[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SourceColorSpace;                                  // 0x38(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DestinationColorSpace;                             // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Display;                                           // 0x58(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                View;                                              // 0x68(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst)
	enum class EOpenColorIOViewTransformDirection DisplayViewDirection;                              // 0x78(0x1)(Edit, ConstParm, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_688[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<int32, class UTexture*>                 Textures;                                          // 0x80(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_68A[0x98];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIOColorTransform* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class OpenColorIO.OpenColorIOConfiguration
class UOpenColorIOConfiguration : public UObject
{
public:
	struct FFilePath                             ConfigurationFile;                                 // 0x28(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	TArray<struct FOpenColorIOColorSpace>        DesiredColorSpaces;                                // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FOpenColorIODisplayView>       DesiredDisplayViews;                               // 0x48(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UOpenColorIOColorTransform*>    ColorTransforms;                                   // 0x58(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_68F[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIOConfiguration* GetDefaultObj();

	void ReloadExistingColorspaces();
};

// 0x10 (0x38 - 0x28)
// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
class UOpenColorIODisplayExtensionWrapper : public UObject
{
public:
	uint8                                        Pad_6C1[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIODisplayExtensionWrapper* GetDefaultObj();

	TArray<struct FSceneViewExtensionIsActiveFunctor> SetSceneExtensionIsActiveFunctions();
	struct FSceneViewExtensionIsActiveFunctor SetSceneExtensionIsActiveFunction();
	struct FOpenColorIODisplayConfiguration SetOpenColorIOConfiguration();
	void RemoveSceneExtension();
	void GetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& ReturnValue);
	struct FSceneViewExtensionIsActiveFunctor CreateOpenColorIODisplayExtension(class UOpenColorIODisplayExtensionWrapper* ReturnValue);
	struct FOpenColorIODisplayConfiguration CreateInGameOpenColorIODisplayExtension(class UOpenColorIODisplayExtensionWrapper* ReturnValue);
};

}


