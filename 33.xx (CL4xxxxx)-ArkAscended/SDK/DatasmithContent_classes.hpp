#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithObjectTemplate
class UDatasmithObjectTemplate : public UObject
{
public:
	uint8                                        Pad_189C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithObjectTemplate* GetDefaultObj();

};

// 0xA0 (0xD0 - 0x30)
// Class DatasmithContent.DatasmithActorTemplate
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	TSet<class FName>                            Layers;                                            // 0x30(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TSet<class FName>                            Tags;                                              // 0x80(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config)

	static class UClass* StaticClass();
	static class UDatasmithActorTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithAdditionalData
class UDatasmithAdditionalData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDatasmithAdditionalData* GetDefaultObj();

};

// 0x78 (0x538 - 0x4C0)
// Class DatasmithContent.DatasmithAreaLightActor
class ADatasmithAreaLightActor : public AActor
{
public:
	enum class EComponentMobility                Mobility;                                          // 0x4C0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EDatasmithAreaLightActorType      LightType;                                         // 0x4C1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x4C2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18A4[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Dimensions;                                        // 0x4C8(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        Intensity;                                         // 0x4D8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config)
	enum class ELightUnits                       IntensityUnits;                                    // 0x4DC(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18A6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Color;                                             // 0x4E0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Temperature;                                       // 0x4F0(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, Config)
	uint8                                        Pad_18A9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureLightProfile*                  IESTexture;                                        // 0x4F8(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseIESBrightness;                                 // 0x500(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18AB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        IESBrightnessScale;                                // 0x504(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0x508(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        SourceRadius;                                      // 0x520(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Config)
	float                                        SourceLength;                                      // 0x524(0x4)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        AttenuationRadius;                                 // 0x528(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        SpotlightInnerAngle;                               // 0x52C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SpotlightOuterAngle;                               // 0x530(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18AC[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ADatasmithAreaLightActor* GetDefaultObj();

};

// 0x98 (0xC8 - 0x30)
// Class DatasmithContent.DatasmithAreaLightActorTemplate
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	enum class EDatasmithAreaLightActorType      LightType;                                         // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18AF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Dimensions;                                        // 0x38(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FLinearColor                          Color;                                             // 0x48(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Intensity;                                         // 0x58(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config)
	enum class ELightUnits                       IntensityUnits;                                    // 0x5C(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18B1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Temperature;                                       // 0x60(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, Config)
	uint8                                        Pad_18B3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UTextureLightProfile>   IESTexture;                                        // 0x68(0x30)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseIESBrightness;                                 // 0x98(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18B6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        IESBrightnessScale;                                // 0x9C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0xA0(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        SourceRadius;                                      // 0xB8(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Config)
	float                                        SourceLength;                                      // 0xBC(0x4)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        AttenuationRadius;                                 // 0xC0(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_18B7[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithAreaLightActorTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithAssetImportData
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithAssetImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshImportData
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshCADImportData
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshCADImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithSceneImportData
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithTranslatedSceneImportData
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithTranslatedSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithCADImportSceneData
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithCADImportSceneData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithMDLSceneImportData
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithMDLSceneImportData* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class DatasmithContent.DatasmithGLTFSceneImportData
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	class FString                                Generator;                                         // 0x28(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Version;                                           // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_18CA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Author;                                            // 0x40(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                License;                                           // 0x50(0x10)(Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Source;                                            // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UDatasmithGLTFSceneImportData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	class FString                                SourceMeshName;                                    // 0x28(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshGLTFImportData* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class DatasmithContent.DatasmithFBXSceneImportData
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	bool                                         bGenerateLightmapUVs;                              // 0x28(0x1)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18CE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TexturesDir;                                       // 0x30(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        IntermediateSerialization;                         // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bColorizeMaterials;                                // 0x41(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18D0[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithFBXSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithDeltaGenAssetImportData
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithDeltaGenAssetImportData* GetDefaultObj();

};

// 0x48 (0x90 - 0x48)
// Class DatasmithContent.DatasmithDeltaGenSceneImportData
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                         bMergeNodes;                                       // 0x48(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOptimizeDuplicatedNodes;                          // 0x49(0x1)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRemoveInvisibleNodes;                             // 0x4A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSimplifyNodeHierarchy;                            // 0x4B(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportVar;                                        // 0x4C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18DA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                VarPath;                                           // 0x50(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportPos;                                        // 0x60(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PosPath;                                           // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportTml;                                        // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TmlPath;                                           // 0x80(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithDeltaGenSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithVREDAssetImportData
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithVREDAssetImportData* GetDefaultObj();

};

// 0x60 (0xA8 - 0x48)
// Class DatasmithContent.DatasmithVREDSceneImportData
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                         bMergeNodes;                                       // 0x48(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOptimizeDuplicatedNodes;                          // 0x49(0x1)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportMats;                                       // 0x4A(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18E5[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                MatsPath;                                          // 0x50(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportVar;                                        // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCleanVar;                                         // 0x61(0x1)(EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18E7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                VarPath;                                           // 0x68(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportLightInfo;                                  // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18E8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                LightInfoPath;                                     // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bImportClipInfo;                                   // 0x90(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18EA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ClipInfoPath;                                      // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithVREDSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithIFCSceneImportData
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithIFCSceneImportData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshIFCImportData
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
public:
	class FString                                SourceGlobalId;                                    // 0x28(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshIFCImportData* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class DatasmithContent.DatasmithAssetUserData
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<class FName, class FString>             MetaData;                                          // 0x28(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class UDatasmithAssetUserData* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class DatasmithContent.DatasmithCineCameraActorTemplate
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                            // 0x30(0x38)(Edit, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithCineCameraActorTemplate* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class DatasmithContent.DatasmithCineCameraComponentTemplate
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;                                  // 0x30(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	struct FDatasmithCameraLensSettingsTemplate  LensSettings;                                      // 0x38(0x4)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings;                                     // 0x3C(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config)
	float                                        CurrentAperture;                                   // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config)
	uint8                                        Pad_18F4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings;                               // 0x50(0x40)(ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst)

	static class UClass* StaticClass();
	static class UDatasmithCineCameraComponentTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithContentBlueprintLibrary
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDatasmithContentBlueprintLibrary* GetDefaultObj();

	TArray<class FString> GetDatasmithUserDataValuesForKey(class UObject** Object, class FName Key);
	class FString GetDatasmithUserDataValueForKey(class UObject** Object, class FName Key);
	TArray<class FString> GetDatasmithUserDataKeysAndValuesForValue(class UObject** Object);
	class UDatasmithAssetUserData* GetDatasmithUserData(class UObject** Object);
};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithCustomActionBase
class UDatasmithCustomActionBase : public UObject
{
public:
	uint8                                        Pad_191C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithCustomActionBase* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class DatasmithContent.DatasmithDecalComponentTemplate
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
public:
	int32                                        SortOrder;                                         // 0x30(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1920[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               DecalSize;                                         // 0x38(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    Material;                                          // 0x50(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UDatasmithDecalComponentTemplate* GetDefaultObj();

};

// 0x10 (0x4D0 - 0x4C0)
// Class DatasmithContent.DatasmithImportedSequencesActor
class ADatasmithImportedSequencesActor : public AActor
{
public:
	TArray<class ULevelSequence*>                ImportedSequences;                                 // 0x4C0(0x10)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ADatasmithImportedSequencesActor* GetDefaultObj();

	class ULevelSequence* PlayLevelSequence();
};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithOptionsBase
class UDatasmithOptionsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDatasmithOptionsBase* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithCommonTessellationOptions
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
public:
	struct FDatasmithTessellationOptions         Options;                                           // 0x28(0x10)(Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithCommonTessellationOptions* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class DatasmithContent.DatasmithImportOptions
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                               // 0x28(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                            // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                             // 0x2A(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithImportActorPolicy       StaticMeshActorImportPolicy;                       // 0x2B(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithImportActorPolicy       LightImportPolicy;                                 // 0x2C(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithImportActorPolicy       CameraImportPolicy;                                // 0x2D(0x1)(EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithImportActorPolicy       OtherActorImportPolicy;                            // 0x2E(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDatasmithImportMaterialQuality   MaterialQuality;                                   // 0x2F(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FDatasmithImportBaseOptions           BaseOptions;                                       // 0x30(0x14)(BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FDatasmithReimportOptions             ReimportOptions;                                   // 0x44(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1945[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Filename;                                          // 0x48(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class FString                                FilePath;                                          // 0x58(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
	class FString                                SourceUri;                                         // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1946[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithImportOptions* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithLandscapeTemplate
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x30(0x8)(BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StaticLightingLOD;                                 // 0x38(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1948[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithLandscapeTemplate* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class DatasmithContent.DatasmithLightComponentTemplate
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	uint8                                        bVisible : 1;                                      // Mask: 0x1, PropSize: 0x10x30(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_BF : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_194B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        CastShadows : 1;                                   // Mask: 0x1, PropSize: 0x10x34(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bUseTemperature : 1;                               // Mask: 0x2, PropSize: 0x10x34(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config)
	uint8                                        bUseIESBrightness : 1;                             // Mask: 0x4, PropSize: 0x10x34(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_C0 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1950[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Intensity;                                         // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config)
	float                                        Temperature;                                       // 0x3C(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, Config)
	float                                        IESBrightnessScale;                                // 0x40(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          LightColor;                                        // 0x44(0x10)(Edit, OutParm, ZeroConstructor, Config)
	uint8                                        Pad_1953[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    LightFunctionMaterial;                             // 0x58(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureLightProfile*                  IESTexture;                                        // 0x60(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithLightComponentTemplate* GetDefaultObj();

};

// 0x170 (0x1A0 - 0x30)
// Class DatasmithContent.DatasmithMaterialInstanceTemplate
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	TSoftObjectPtr<class UMaterialInterface>     ParentMaterial;                                    // 0x30(0x30)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FName, float>                     ScalarParameterValues;                             // 0x60(0x50)(Edit, ConstParm, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, struct FLinearColor>       VectorParameterValues;                             // 0xB0(0x50)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, TSoftObjectPtr<class UTexture>> TextureParameterValues;                            // 0x100(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FDatasmithStaticParameterSetTemplate  StaticParameters;                                  // 0x150(0x50)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithMaterialInstanceTemplate* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithPointLightComponentTemplate
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ELightUnits                       IntensityUnits;                                    // 0x30(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_195A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SourceRadius;                                      // 0x34(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Config)
	float                                        SourceLength;                                      // 0x38(0x4)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        AttenuationRadius;                                 // 0x3C(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithPointLightComponentTemplate* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithPostProcessSettingsTemplate Settings;                                          // 0x30(0x40)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        bUnbound : 1;                                      // Mask: 0x2, PropSize: 0x10x70(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1963[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithPostProcessVolumeTemplate* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithScene
class UDatasmithScene : public UObject
{
public:
	uint8                                        Pad_1964[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithScene* GetDefaultObj();

};

// 0x58 (0x518 - 0x4C0)
// Class DatasmithContent.DatasmithSceneActor
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                       Scene;                                             // 0x4C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	TMap<class FName, TSoftObjectPtr<class AActor>> RelatedActors;                                     // 0x4C8(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ADatasmithSceneActor* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class DatasmithContent.DatasmithSceneComponentTemplate
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FTransform                            RelativeTransform;                                 // 0x30(0x60)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	enum class EComponentMobility                Mobility;                                          // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_1968[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USceneComponent>        AttachParent;                                      // 0x98(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bVisible;                                          // 0xC8(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bCastShadow;                                       // 0xC9(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1969[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            Tags;                                              // 0xD0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config)

	static class UClass* StaticClass();
	static class UDatasmithSceneComponentTemplate* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithSkyLightComponentTemplate
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ESkyLightSourceType               SourceType;                                        // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_196B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CubemapResolution;                                 // 0x34(0x4)(BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureCube*                          Cubemap;                                           // 0x38(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithSkyLightComponentTemplate* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class DatasmithContent.DatasmithSpotLightComponentTemplate
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                        InnerConeAngle;                                    // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config)
	float                                        OuterConeAngle;                                    // 0x34(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config)

	static class UClass* StaticClass();
	static class UDatasmithSpotLightComponentTemplate* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, GlobalConfig)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshComponentTemplate* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class DatasmithContent.DatasmithStaticMeshTemplate
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate  SectionInfoMap;                                    // 0x30(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LightMapCoordinateIndex;                           // 0x80(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	int32                                        LightMapResolution;                                // 0x84(0x4)(ConstParm, ExportObject, Parm, ReturnParm)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                     // 0x88(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials;                                   // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshTemplate* GetDefaultObj();

};

}


