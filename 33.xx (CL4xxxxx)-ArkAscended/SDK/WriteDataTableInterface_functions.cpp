#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WriteDataTableInterface.WriteDataTableInterface_C
// (None)

class UClass* IWriteDataTableInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WriteDataTableInterface_C");

	return Clss;
}


// WriteDataTableInterface_C WriteDataTableInterface.Default__WriteDataTableInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWriteDataTableInterface_C* IWriteDataTableInterface_C::GetDefaultObj()
{
	static class IWriteDataTableInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWriteDataTableInterface_C*>(IWriteDataTableInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WriteDataTableInterface.WriteDataTableInterface_C.WriteDataTableFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  InputTable                                                       (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      InputData                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void IWriteDataTableInterface_C::WriteDataTableFunction(class UDataTable** InputTable, const class FString& InputData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WriteDataTableInterface_C", "WriteDataTableFunction");

	Params::IWriteDataTableInterface_C_WriteDataTableFunction_Params Parms{};

	Parms.InputData = InputData;

	UObject::ProcessEvent(Func, &Parms);

	if (InputTable != nullptr)
		*InputTable = Parms.InputTable;

}

}


