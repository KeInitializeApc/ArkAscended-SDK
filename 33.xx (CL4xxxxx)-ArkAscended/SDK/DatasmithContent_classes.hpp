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
	uint8                                        Pad_13FC[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithObjectTemplate* GetDefaultObj();

};

// 0xA0 (0xD0 - 0x30)
// Class DatasmithContent.DatasmithActorTemplate
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	TSet<class FName>                            Layers;                                            // 0x30(0x50)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSet<class FName>                            Tags;                                              // 0x80(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)

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

// 0x78 (0x540 - 0x4C8)
// Class DatasmithContent.DatasmithAreaLightActor
class ADatasmithAreaLightActor : public AActor
{
public:
	enum class EComponentMobility                Mobility;                                          // 0x4C8(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst)
	enum class EDatasmithAreaLightActorType      LightType;                                         // 0x4C9(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x4CA(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1408[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Dimensions;                                        // 0x4D0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	float                                        Intensity;                                         // 0x4E0(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, Config)
	enum class ELightUnits                       IntensityUnits;                                    // 0x4E4(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1409[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Color;                                             // 0x4E8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Temperature;                                       // 0x4F8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config)
	uint8                                        Pad_140A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureLightProfile*                  IESTexture;                                        // 0x500(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bUseIESBrightness;                                 // 0x508(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_140B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        IESBrightnessScale;                                // 0x50C(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0x510(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        SourceRadius;                                      // 0x528(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config)
	float                                        SourceLength;                                      // 0x52C(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        AttenuationRadius;                                 // 0x530(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        SpotlightInnerAngle;                               // 0x534(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        SpotlightOuterAngle;                               // 0x538(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_140E[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ADatasmithAreaLightActor* GetDefaultObj();

};

// 0x98 (0xC8 - 0x30)
// Class DatasmithContent.DatasmithAreaLightActorTemplate
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	enum class EDatasmithAreaLightActorType      LightType;                                         // 0x30(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x31(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1413[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Dimensions;                                        // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	struct FLinearColor                          Color;                                             // 0x48(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Intensity;                                         // 0x58(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, Config)
	enum class ELightUnits                       IntensityUnits;                                    // 0x5C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1416[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Temperature;                                       // 0x60(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config)
	uint8                                        Pad_1417[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UTextureLightProfile>   IESTexture;                                        // 0x68(0x30)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bUseIESBrightness;                                 // 0x98(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1419[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        IESBrightnessScale;                                // 0x9C(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0xA0(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        SourceRadius;                                      // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config)
	float                                        SourceLength;                                      // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        AttenuationRadius;                                 // 0xC0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_141C[0x4];                                     // Fixing Size Of Struct > TateDumper <

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
	class FString                                Generator;                                         // 0x28(0x10)(Edit, ConstParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        Version;                                           // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_1426[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Author;                                            // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                License;                                           // 0x50(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FString                                Source;                                            // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UDatasmithGLTFSceneImportData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	class FString                                SourceMeshName;                                    // 0x28(0x10)(Edit, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshGLTFImportData* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class DatasmithContent.DatasmithFBXSceneImportData
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	bool                                         bGenerateLightmapUVs;                              // 0x28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_142E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TexturesDir;                                       // 0x30(0x10)(Edit, ExportObject, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        IntermediateSerialization;                         // 0x40(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bColorizeMaterials;                                // 0x41(0x1)(Edit, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_142F[0x6];                                     // Fixing Size Of Struct > TateDumper <

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
	bool                                         bMergeNodes;                                       // 0x48(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bOptimizeDuplicatedNodes;                          // 0x49(0x1)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bRemoveInvisibleNodes;                             // 0x4A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bSimplifyNodeHierarchy;                            // 0x4B(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bImportVar;                                        // 0x4C(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1430[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                VarPath;                                           // 0x50(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bImportPos;                                        // 0x60(0x1)(EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1431[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PosPath;                                           // 0x68(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bImportTml;                                        // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1433[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TmlPath;                                           // 0x80(0x10)(BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)

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
	bool                                         bMergeNodes;                                       // 0x48(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bOptimizeDuplicatedNodes;                          // 0x49(0x1)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bImportMats;                                       // 0x4A(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1434[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                MatsPath;                                          // 0x50(0x10)(BlueprintVisible, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bImportVar;                                        // 0x60(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bCleanVar;                                         // 0x61(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1435[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                VarPath;                                           // 0x68(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bImportLightInfo;                                  // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1436[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                LightInfoPath;                                     // 0x80(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bImportClipInfo;                                   // 0x90(0x1)(BlueprintVisible, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1437[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ClipInfoPath;                                      // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)

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
	class FString                                SourceGlobalId;                                    // 0x28(0x10)(BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshIFCImportData* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class DatasmithContent.DatasmithAssetUserData
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<class FName, class FString>             MetaData;                                          // 0x28(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UDatasmithAssetUserData* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class DatasmithContent.DatasmithCineCameraActorTemplate
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                            // 0x30(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithCineCameraActorTemplate* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class DatasmithContent.DatasmithCineCameraComponentTemplate
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;                                  // 0x30(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FDatasmithCameraLensSettingsTemplate  LensSettings;                                      // 0x38(0x4)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings;                                     // 0x3C(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0x44(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Config)
	float                                        CurrentAperture;                                   // 0x48(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config)
	uint8                                        Pad_143E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings;                               // 0x50(0x40)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst)

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

	bool GetDatasmithUserDataValuesForKey(class UObject** Object, const TArray<class FString>& ReturnValue);
	bool GetDatasmithUserDataValueForKey(class UObject** Object, const class FString& ReturnValue);
	TArray<class FName> GetDatasmithUserDataKeysAndValuesForValue(class UObject** Object, const TArray<class FString>& OutValues);
	void GetDatasmithUserData(class UObject** Object, class UDatasmithAssetUserData* ReturnValue);
};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithCustomActionBase
class UDatasmithCustomActionBase : public UObject
{
public:
	uint8                                        Pad_145D[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithCustomActionBase* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class DatasmithContent.DatasmithDecalComponentTemplate
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
public:
	int32                                        SortOrder;                                         // 0x30(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1460[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               DecalSize;                                         // 0x38(0x18)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    Material;                                          // 0x50(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UDatasmithDecalComponentTemplate* GetDefaultObj();

};

// 0x10 (0x4D8 - 0x4C8)
// Class DatasmithContent.DatasmithImportedSequencesActor
class ADatasmithImportedSequencesActor : public AActor
{
public:
	TArray<class ULevelSequence*>                ImportedSequences;                                 // 0x4C8(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)

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
	struct FDatasmithTessellationOptions         Options;                                           // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithCommonTessellationOptions* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class DatasmithContent.DatasmithImportOptions
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                               // 0x28(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                            // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                             // 0x2A(0x1)(Edit, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithImportActorPolicy       StaticMeshActorImportPolicy;                       // 0x2B(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithImportActorPolicy       LightImportPolicy;                                 // 0x2C(0x1)(ExportObject, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithImportActorPolicy       CameraImportPolicy;                                // 0x2D(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithImportActorPolicy       OtherActorImportPolicy;                            // 0x2E(0x1)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EDatasmithImportMaterialQuality   MaterialQuality;                                   // 0x2F(0x1)(Edit, ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FDatasmithImportBaseOptions           BaseOptions;                                       // 0x30(0x14)(ConstParm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FDatasmithReimportOptions             ReimportOptions;                                   // 0x44(0x2)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_147F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Filename;                                          // 0x48(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class FString                                FilePath;                                          // 0x58(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                SourceUri;                                         // 0x68(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1481[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithImportOptions* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithLandscapeTemplate
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        StaticLightingLOD;                                 // 0x38(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1483[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithLandscapeTemplate* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class DatasmithContent.DatasmithLightComponentTemplate
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	uint8                                        bVisible : 1;                                      // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_B2 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1486[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        CastShadows : 1;                                   // Mask: 0x1, PropSize: 0x10x34(0x1)(BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        bUseTemperature : 1;                               // Mask: 0x2, PropSize: 0x10x34(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Config)
	uint8                                        bUseIESBrightness : 1;                             // Mask: 0x4, PropSize: 0x10x34(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_B3 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1487[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Intensity;                                         // 0x38(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, Config)
	float                                        Temperature;                                       // 0x3C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config)
	float                                        IESBrightnessScale;                                // 0x40(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          LightColor;                                        // 0x44(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Config)
	uint8                                        Pad_148C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    LightFunctionMaterial;                             // 0x58(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextureLightProfile*                  IESTexture;                                        // 0x60(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithLightComponentTemplate* GetDefaultObj();

};

// 0x170 (0x1A0 - 0x30)
// Class DatasmithContent.DatasmithMaterialInstanceTemplate
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	TSoftObjectPtr<class UMaterialInterface>     ParentMaterial;                                    // 0x30(0x30)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	TMap<class FName, float>                     ScalarParameterValues;                             // 0x60(0x50)(OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, struct FLinearColor>       VectorParameterValues;                             // 0xB0(0x50)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, TSoftObjectPtr<class UTexture>> TextureParameterValues;                            // 0x100(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FDatasmithStaticParameterSetTemplate  StaticParameters;                                  // 0x150(0x50)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithMaterialInstanceTemplate* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithPointLightComponentTemplate
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ELightUnits                       IntensityUnits;                                    // 0x30(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1496[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SourceRadius;                                      // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config)
	float                                        SourceLength;                                      // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        AttenuationRadius;                                 // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithPointLightComponentTemplate* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithPostProcessSettingsTemplate Settings;                                          // 0x30(0x40)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        bUnbound : 1;                                      // Mask: 0x2, PropSize: 0x10x70(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1499[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithPostProcessVolumeTemplate* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithScene
class UDatasmithScene : public UObject
{
public:
	uint8                                        Pad_149A[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDatasmithScene* GetDefaultObj();

};

// 0x58 (0x520 - 0x4C8)
// Class DatasmithContent.DatasmithSceneActor
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                       Scene;                                             // 0x4C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, SubobjectReference)
	TMap<class FName, TSoftObjectPtr<class AActor>> RelatedActors;                                     // 0x4D0(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ADatasmithSceneActor* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class DatasmithContent.DatasmithSceneComponentTemplate
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FTransform                            RelativeTransform;                                 // 0x30(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	enum class EComponentMobility                Mobility;                                          // 0x90(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst)
	uint8                                        Pad_149F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USceneComponent>        AttachParent;                                      // 0x98(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bVisible;                                          // 0xC8(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bCastShadow;                                       // 0xC9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14A0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            Tags;                                              // 0xD0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)

	static class UClass* StaticClass();
	static class UDatasmithSceneComponentTemplate* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithSkyLightComponentTemplate
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ESkyLightSourceType               SourceType;                                        // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14A3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CubemapResolution;                                 // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextureCube*                          Cubemap;                                           // 0x38(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithSkyLightComponentTemplate* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class DatasmithContent.DatasmithSpotLightComponentTemplate
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                        InnerConeAngle;                                    // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config)
	float                                        OuterConeAngle;                                    // 0x34(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config)

	static class UClass* StaticClass();
	static class UDatasmithSpotLightComponentTemplate* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x30(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshComponentTemplate* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class DatasmithContent.DatasmithStaticMeshTemplate
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate  SectionInfoMap;                                    // 0x30(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        LightMapCoordinateIndex;                           // 0x80(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        LightMapResolution;                                // 0x84(0x4)(ConstParm, ExportObject, Parm, ReturnParm)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                     // 0x88(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials;                                   // 0x98(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshTemplate* GetDefaultObj();

};

}


