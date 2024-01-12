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
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x2A(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x2B(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x2C(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CB4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0x30(0x4)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CB5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Float;                                             // 0x48(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_2CB6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPropertyPathTestStruct               Struct;                                            // 0x50(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	struct FPropertyPathTestStruct               StructRef;                                         // 0xA0(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPropertyPathTestStruct               StructConstRef;                                    // 0xF0(0x50)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x140(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CB9[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPropertyPathTestObject* GetDefaultObj();

	struct FPropertyPathTestStruct SetStructRef();
	struct FPropertyPathTestStruct SetStructConstRef();
	struct FPropertyPathTestStruct SetStruct();
	void SetFloat(float InFloat);
	struct FPropertyPathTestStruct GetStructRef();
	struct FPropertyPathTestStruct GetStructConstRef();
	struct FPropertyPathTestStruct GetStruct();
	float GetFloat();
};

}


