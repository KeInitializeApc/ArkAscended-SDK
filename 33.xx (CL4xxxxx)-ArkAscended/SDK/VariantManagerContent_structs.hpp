#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPropertyValueCategory : uint8
{
	Undefined                      = 0,
	Generic                        = 1,
	RelativeLocation               = 2,
	RelativeRotation               = 4,
	RelativeScale3D                = 8,
	Visibility                     = 16,
	Material                       = 32,
	Color                          = 64,
	Option                         = 128,
	EPropertyValueCategory_MAX     = 129,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct VariantManagerContent.FunctionCaller
struct FFunctionCaller
{
public:
	class FName                                  FunctionName;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VariantManagerContent.CapturedPropSegment
struct FCapturedPropSegment
{
public:
	class FString                                PropertyName;                                      // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
	int32                                        PropertyIndex;                                     // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19CD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ComponentName;                                     // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct VariantManagerContent.VariantDependency
struct FVariantDependency
{
public:
	TSoftObjectPtr<class UVariantSet>            VariantSet;                                        // 0x0(0x30)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig)
	TSoftObjectPtr<class UVariant>               Variant;                                           // 0x30(0x30)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, GlobalConfig)
	bool                                         bEnabled;                                          // 0x60(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_19D1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


