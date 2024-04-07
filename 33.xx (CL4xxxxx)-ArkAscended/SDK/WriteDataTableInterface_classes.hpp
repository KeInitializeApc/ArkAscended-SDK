#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass WriteDataTableInterface.WriteDataTableInterface_C
class IWriteDataTableInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWriteDataTableInterface_C* GetDefaultObj();

	void WriteDataTableFunction(class UDataTable** InputTable, const class FString& InputData);
};

}


