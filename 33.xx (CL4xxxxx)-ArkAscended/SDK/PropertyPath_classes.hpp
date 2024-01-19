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
	bool                                         Bool;                                              // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x29(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x2A(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x2B(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x2C(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D8F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0x30(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D91[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Float;                                             // 0x48(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_2D94[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPropertyPathTestStruct               Struct;                                            // 0x50(0x50)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FPropertyPathTestStruct               StructRef;                                         // 0xA0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPropertyPathTestStruct               StructConstRef;                                    // 0xF0(0x50)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x140(0x8)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D96[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPropertyPathTestObject* GetDefaultObj();

	void SetStructRef(const struct FPropertyPathTestStruct& InStruct);
	void SetStructConstRef(const struct FPropertyPathTestStruct& InStruct);
	void SetStruct(const struct FPropertyPathTestStruct& InStruct);
	float SetFloat();
	void GetStructRef(const struct FPropertyPathTestStruct& ReturnValue);
	void GetStructConstRef(const struct FPropertyPathTestStruct& ReturnValue);
	void GetStruct(const struct FPropertyPathTestStruct& ReturnValue);
	void GetFloat(float ReturnValue);
};

}


