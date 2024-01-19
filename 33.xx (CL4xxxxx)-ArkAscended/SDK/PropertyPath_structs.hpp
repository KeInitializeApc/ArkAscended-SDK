#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPropertyPathTestEnum : uint8
{
	One                            = 0,
	Two                            = 1,
	Three                          = 2,
	Four                           = 3,
	EPropertyPathTestEnum_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct PropertyPath.PropertyPathSegment
struct FPropertyPathSegment
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	int32                                        ArrayIndex;                                        // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D9B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStruct*                               Struct;                                            // 0x10(0x8)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2D9C[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct PropertyPath.CachedPropertyPath
struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>          Segments;                                          // 0x0(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2D9E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UFunction*                             CachedFunction;                                    // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D9F[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestInnerStruct
struct FPropertyPathTestInnerStruct
{
public:
	float                                        Float;                                             // 0x0(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	bool                                         Bool;                                              // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x5(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x6(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x7(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x8(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DA3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0xC(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                String;                                            // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestStruct
struct FPropertyPathTestStruct
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_2DA6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0x4(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0xA(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0xB(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DA8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Float;                                             // 0x20(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_2DA9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPropertyPathTestInnerStruct          InnerStruct;                                       // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x48(0x8)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestBed
struct FPropertyPathTestBed
{
public:
	class UPropertyPathTestObject*               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UPropertyPathTestObject*               ModifiedObject;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPropertyPathTestStruct               ModifiedStruct;                                    // 0x10(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPropertyPathTestStruct               DefaultStruct;                                     // 0x60(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

}


