#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PageWidgets.BPI_PageWidgets_C
// (None)

class UClass* IBPI_PageWidgets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PageWidgets_C");

	return Clss;
}


// BPI_PageWidgets_C BPI_PageWidgets.Default__BPI_PageWidgets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PageWidgets_C* IBPI_PageWidgets_C::GetDefaultObj()
{
	static class IBPI_PageWidgets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PageWidgets_C*>(IBPI_PageWidgets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PageWidgets.BPI_PageWidgets_C.UpdateSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FText IBPI_PageWidgets_C::UpdateSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PageWidgets_C", "UpdateSearch");

	Params::IBPI_PageWidgets_C_UpdateSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPI_PageWidgets.BPI_PageWidgets_C.GetClose_B
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

class UWidget* IBPI_PageWidgets_C::GetClose_B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PageWidgets_C", "GetClose_B");

	Params::IBPI_PageWidgets_C_GetClose_B_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPI_PageWidgets.BPI_PageWidgets_C.OnSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FText IBPI_PageWidgets_C::OnSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PageWidgets_C", "OnSearch");

	Params::IBPI_PageWidgets_C_OnSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

