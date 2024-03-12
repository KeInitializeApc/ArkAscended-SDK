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
	uint8                                        bUseLegacyProcessor : 1;                           // Mask: 0x1, PropSize: 0x10x38(0x1)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bUse32fLUT : 1;                                    // Mask: 0x2, PropSize: 0x10x38(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bSupportInverseViewTransforms : 1;                 // Mask: 0x4, PropSize: 0x10x38(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_F4[0x7];                                       // Fixing Size Of Struct > TateDumper <

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

	bool ApplyColorSpaceTransform(class UObject** WorldContextObject);
};

// 0x140 (0x168 - 0x28)
// Class OpenColorIO.OpenColorIOColorTransform
class UOpenColorIOColorTransform : public UObject
{
public:
	class UOpenColorIOConfiguration*             ConfigurationOwner;                                // 0x28(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsDisplayViewType;                                // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_106[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SourceColorSpace;                                  // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DestinationColorSpace;                             // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Display;                                           // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                View;                                              // 0x68(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	enum class EOpenColorIOViewTransformDirection DisplayViewDirection;                              // 0x78(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_108[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<int32, class UTexture*>                 Textures;                                          // 0x80(0x50)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_109[0x98];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIOColorTransform* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class OpenColorIO.OpenColorIOConfiguration
class UOpenColorIOConfiguration : public UObject
{
public:
	struct FFilePath                             ConfigurationFile;                                 // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	TArray<struct FOpenColorIOColorSpace>        DesiredColorSpaces;                                // 0x38(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FOpenColorIODisplayView>       DesiredDisplayViews;                               // 0x48(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UOpenColorIOColorTransform*>    ColorTransforms;                                   // 0x58(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10B[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIOConfiguration* GetDefaultObj();

	void ReloadExistingColorspaces();
};

// 0x10 (0x38 - 0x28)
// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
class UOpenColorIODisplayExtensionWrapper : public UObject
{
public:
	uint8                                        Pad_119[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOpenColorIODisplayExtensionWrapper* GetDefaultObj();

	TArray<struct FSceneViewExtensionIsActiveFunctor> SetSceneExtensionIsActiveFunctions();
	struct FSceneViewExtensionIsActiveFunctor SetSceneExtensionIsActiveFunction();
	struct FOpenColorIODisplayConfiguration SetOpenColorIOConfiguration();
	void RemoveSceneExtension();
	struct FOpenColorIODisplayConfiguration GetOpenColorIOConfiguration();
	class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension();
	class UOpenColorIODisplayExtensionWrapper* CreateInGameOpenColorIODisplayExtension();
};

}


