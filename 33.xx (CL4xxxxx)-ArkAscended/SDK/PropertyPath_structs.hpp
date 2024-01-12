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
	int32                                        ArrayIndex;                                        // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CBC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStruct*                               Struct;                                            // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2CBD[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct PropertyPath.CachedPropertyPath
struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>          Segments;                                          // 0x0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2CBE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UFunction*                             CachedFunction;                                    // 0x18(0x8)(Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CBF[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestInnerStruct
struct FPropertyPathTestInnerStruct
{
public:
	float                                        Float;                                             // 0x0(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	bool                                         Bool;                                              // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x6(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x7(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CC2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0xC(0x4)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                String;                                            // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestStruct
struct FPropertyPathTestStruct
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_2CC3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0x4(0x4)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x9(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0xA(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0xB(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CC5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Float;                                             // 0x20(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_2CC6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPropertyPathTestInnerStruct          InnerStruct;                                       // 0x28(0x20)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x48(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestBed
struct FPropertyPathTestBed
{
public:
	class UPropertyPathTestObject*               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UPropertyPathTestObject*               ModifiedObject;                                    // 0x8(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FPropertyPathTestStruct               ModifiedStruct;                                    // 0x10(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FPropertyPathTestStruct               DefaultStruct;                                     // 0x60(0x50)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}


