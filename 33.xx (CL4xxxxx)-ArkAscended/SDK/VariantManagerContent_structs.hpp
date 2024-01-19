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
	class FName                                  FunctionName;                                      // 0x0(0x8)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VariantManagerContent.CapturedPropSegment
struct FCapturedPropSegment
{
public:
	class FString                                PropertyName;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        PropertyIndex;                                     // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_634[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ComponentName;                                     // 0x18(0x10)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct VariantManagerContent.VariantDependency
struct FVariantDependency
{
public:
	TSoftObjectPtr<class UVariantSet>            VariantSet;                                        // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	TSoftObjectPtr<class UVariant>               Variant;                                           // 0x30(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         bEnabled;                                          // 0x60(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_635[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


