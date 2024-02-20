#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x150 - 0x28)
// Class PropertyPath.PropertyPathTestObject
class UPropertyPathTestObject : public UObject
{
public:
	bool                                         Bool;                                              // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x29(0x1)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x2A(0x1)(Edit, ConstParm, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x2B(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x2C(0x1)(ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F49[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F4B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0x38(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Float;                                             // 0x48(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config)
	uint8                                        Pad_1F4D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPropertyPathTestStruct               Struct;                                            // 0x50(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FPropertyPathTestStruct               StructRef;                                         // 0xA0(0x50)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPropertyPathTestStruct               StructConstRef;                                    // 0xF0(0x50)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x140(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F52[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPropertyPathTestObject* GetDefaultObj();

	struct FPropertyPathTestStruct SetStructRef();
	struct FPropertyPathTestStruct SetStructConstRef();
	struct FPropertyPathTestStruct SetStruct();
	void SetFloat(float InFloat);
	void GetStructRef(const struct FPropertyPathTestStruct& ReturnValue);
	void GetStructConstRef(const struct FPropertyPathTestStruct& ReturnValue);
	void GetStruct(const struct FPropertyPathTestStruct& ReturnValue);
	void GetFloat(float ReturnValue);
};

}


