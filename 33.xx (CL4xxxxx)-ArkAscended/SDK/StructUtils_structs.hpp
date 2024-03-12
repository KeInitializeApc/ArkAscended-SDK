#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPropertyBagPropertyType : uint8
{
	None                           = 0,
	Bool                           = 1,
	Byte                           = 2,
	Int32                          = 3,
	Int64                          = 4,
	Float                          = 5,
	Double                         = 6,
	Name                           = 7,
	String                         = 8,
	Text                           = 9,
	Enum                           = 10,
	Struct                         = 11,
	Object                         = 12,
	SoftObject                     = 13,
	Class                          = 14,
	SoftClass                      = 15,
	EPropertyBagPropertyType_MAX   = 16,
};

enum class EPropertyBagContainerType : uint8
{
	None                           = 0,
	Array                          = 1,
	EPropertyBagContainerType_MAX  = 2,
};

enum class EPropertyBagResult : uint8
{
	Success                        = 0,
	TypeMismatch                   = 1,
	OutOfBounds                    = 2,
	PropertyNotFound               = 3,
	EPropertyBagResult_MAX         = 4,
};

enum class EPropertyBagMissingEnum : uint8
{
	Missing                        = 0,
	EPropertyBagMissingEnum_MAX    = 1,
};

enum class EStructUtilsResult : uint8
{
	Valid                          = 0,
	NotValid                       = 1,
	EStructUtilsResult_MAX         = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedStruct
struct FInstancedStruct
{
public:
	uint8                                        Pad_73B[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedPropertyBag
struct FInstancedPropertyBag
{
public:
	struct FInstancedStruct                      Value;                                             // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedStructContainer
struct FInstancedStructContainer
{
public:
	uint8                                        Pad_73C[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StructUtils.PropertyBagPropertyDescMetaData
struct FPropertyBagPropertyDescMetaData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct StructUtils.PropertyBagPropertyDesc
struct FPropertyBagPropertyDesc
{
public:
	class UObject*                               ValueTypeObject;                                   // 0x0(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 ID;                                                // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FName                                  Name;                                              // 0x18(0x8)(ConstParm, Net, OutParm)
	enum class EPropertyBagPropertyType          ValueType;                                         // 0x20(0x1)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyBagContainerType         ContainerType;                                     // 0x21(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_742[0xE];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct StructUtils.PropertyBagMissingStruct
struct FPropertyBagMissingStruct
{
public:
	uint8                                        Pad_743[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.ConstSharedStruct
struct FConstSharedStruct
{
public:
	uint8                                        Pad_744[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x10 - 0x10)
// ScriptStruct StructUtils.SharedStruct
struct FSharedStruct : public FConstSharedStruct
{
public:
};

}


