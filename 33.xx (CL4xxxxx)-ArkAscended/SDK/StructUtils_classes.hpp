#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StructUtils.PropertyBagMissingObject
class UPropertyBagMissingObject : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPropertyBagMissingObject* GetDefaultObj();

};

// 0x18 (0xD8 - 0xC0)
// Class StructUtils.PropertyBag
class UPropertyBag : public UScriptStruct
{
public:
	TArray<struct FPropertyBagPropertyDesc>      PropertyDescs;                                     // 0xC0(0x10)(Edit, ConstParm, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_66E[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPropertyBag* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class StructUtils.StructUtilsFunctionLibrary
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStructUtilsFunctionLibrary* GetDefaultObj();

	struct FInstancedStruct SetInstancedStructValue(int32 Value);
	class UScriptStruct* Reset();
	bool NotEqual_InstancedStruct();
	struct FInstancedStruct MakeInstancedStruct(int32 Value);
	bool IsValid_InstancedStruct();
	enum class EStructUtilsResult IsInstancedStructValid();
	struct FInstancedStruct GetInstancedStructValue(int32 Value);
	bool EqualEqual_InstancedStruct();
};

}


