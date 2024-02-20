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
	int32                                        ArrayIndex;                                        // 0x8(0x4)(Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F5B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStruct*                               Struct;                                            // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1F5C[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct PropertyPath.CachedPropertyPath
struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>          Segments;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1F61[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UFunction*                             CachedFunction;                                    // 0x18(0x8)(Edit, ConstParm, ExportObject, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F62[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestInnerStruct
struct FPropertyPathTestInnerStruct
{
public:
	float                                        Float;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config)
	bool                                         Bool;                                              // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x5(0x1)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x6(0x1)(Edit, ConstParm, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x7(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F68[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                String;                                            // 0x10(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestStruct
struct FPropertyPathTestStruct
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config)
	uint8                                        Pad_1F6A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x8(0x1)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x9(0x1)(Edit, ConstParm, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0xA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0xB(0x1)(ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F6D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0x10(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Float;                                             // 0x20(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config)
	uint8                                        Pad_1F6F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPropertyPathTestInnerStruct          InnerStruct;                                       // 0x28(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestBed
struct FPropertyPathTestBed
{
public:
	class UPropertyPathTestObject*               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UPropertyPathTestObject*               ModifiedObject;                                    // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPropertyPathTestStruct               ModifiedStruct;                                    // 0x10(0x50)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPropertyPathTestStruct               DefaultStruct;                                     // 0x60(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


