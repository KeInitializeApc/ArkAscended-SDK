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
	class FName                                  FunctionName;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VariantManagerContent.CapturedPropSegment
struct FCapturedPropSegment
{
public:
	class FString                                PropertyName;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        PropertyIndex;                                     // 0x10(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1608[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ComponentName;                                     // 0x18(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct VariantManagerContent.VariantDependency
struct FVariantDependency
{
public:
	TSoftObjectPtr<class UVariantSet>            VariantSet;                                        // 0x0(0x30)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TSoftObjectPtr<class UVariant>               Variant;                                           // 0x30(0x30)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bEnabled;                                          // 0x60(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_160D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


