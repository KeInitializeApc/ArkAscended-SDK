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
	bool                                         Bool;                                              // 0x28(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x2A(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x2B(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_24A7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Integer;                                           // 0x30(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_24A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0x38(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Float;                                             // 0x48(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config)
	uint8                                        Pad_24AC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPropertyPathTestStruct               Struct;                                            // 0x50(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst)
	struct FPropertyPathTestStruct               StructRef;                                         // 0xA0(0x50)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPropertyPathTestStruct               StructConstRef;                                    // 0xF0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x140(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_24AE[0x8];                                     // Fixing Size Of Struct > TateDumper <

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


