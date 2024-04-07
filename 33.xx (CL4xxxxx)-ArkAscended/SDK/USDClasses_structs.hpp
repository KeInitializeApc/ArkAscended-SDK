#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUsdDuplicateType : uint8
{
	FlattenComposedPrim            = 0,
	SingleLayerSpecs               = 1,
	AllLocalLayerSpecs             = 2,
	EUsdDuplicateType_MAX          = 3,
};

enum class EUsdSaveDialogBehavior : uint8
{
	NeverSave                      = 0,
	AlwaysSave                     = 1,
	ShowPrompt                     = 2,
	EUsdSaveDialogBehavior_MAX     = 3,
};

enum class EUsdUpAxis : uint8
{
	YAxis                          = 0,
	ZAxis                          = 1,
	EUsdUpAxis_MAX                 = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct USDClasses.UsdPrimPathList
struct FUsdPrimPathList
{
public:
	TArray<class FString>                        PrimPaths;                                         // 0x0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct USDClasses.UsdStageOptions
struct FUsdStageOptions
{
public:
	float                                        MetersPerUnit;                                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EUsdUpAxis                        UpAxis;                                            // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_6D[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct USDClasses.UsdUnrealAssetInfo
struct FUsdUnrealAssetInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FString                                Identifier;                                        // 0x10(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Version;                                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	class FString                                UnrealContentPath;                                 // 0x30(0x10)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                UnrealAssetType;                                   // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                UnrealExportTime;                                  // 0x50(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                UnrealEngineVersion;                               // 0x60(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


