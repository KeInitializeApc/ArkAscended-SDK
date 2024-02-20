#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemRedpointEOS.EOSControlChannel
// (None)

class UClass* UEOSControlChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSControlChannel");

	return Clss;
}


// EOSControlChannel OnlineSubsystemRedpointEOS.Default__EOSControlChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSControlChannel* UEOSControlChannel::GetDefaultObj()
{
	static class UEOSControlChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSControlChannel*>(UEOSControlChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemRedpointEOS.EOSIpNetConnection
// (None)

class UClass* UEOSIpNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSIpNetConnection");

	return Clss;
}


// EOSIpNetConnection OnlineSubsystemRedpointEOS.Default__EOSIpNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSIpNetConnection* UEOSIpNetConnection::GetDefaultObj()
{
	static class UEOSIpNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSIpNetConnection*>(UEOSIpNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemRedpointEOS.EOSNetConnection
// (None)

class UClass* UEOSNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSNetConnection");

	return Clss;
}


// EOSNetConnection OnlineSubsystemRedpointEOS.Default__EOSNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSNetConnection* UEOSNetConnection::GetDefaultObj()
{
	static class UEOSNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSNetConnection*>(UEOSNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemRedpointEOS.EOSNetDriver
// (None)

class UClass* UEOSNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSNetDriver");

	return Clss;
}


// EOSNetDriver OnlineSubsystemRedpointEOS.Default__EOSNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSNetDriver* UEOSNetDriver::GetDefaultObj()
{
	static class UEOSNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSNetDriver*>(UEOSNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemRedpointEOS.EOSSubsystem
// (None)

class UClass* UEOSSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSSubsystem");

	return Clss;
}


// EOSSubsystem OnlineSubsystemRedpointEOS.Default__EOSSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSSubsystem* UEOSSubsystem::GetDefaultObj()
{
	static class UEOSSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSSubsystem*>(UEOSSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context
// (None)

class UClass* UEOSUserInterface_EnterDevicePinCode_Context::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_EnterDevicePinCode_Context");

	return Clss;
}


// EOSUserInterface_EnterDevicePinCode_Context OnlineSubsystemRedpointEOS.Default__EOSUserInterface_EnterDevicePinCode_Context
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSUserInterface_EnterDevicePinCode_Context* UEOSUserInterface_EnterDevicePinCode_Context::GetDefaultObj()
{
	static class UEOSUserInterface_EnterDevicePinCode_Context* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSUserInterface_EnterDevicePinCode_Context*>(UEOSUserInterface_EnterDevicePinCode_Context::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin
// (Native, Public, BlueprintCallable)
// Parameters:

void UEOSUserInterface_EnterDevicePinCode_Context::CancelLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_EnterDevicePinCode_Context", "CancelLogin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode
// (None)

class UClass* IEOSUserInterface_EnterDevicePinCode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_EnterDevicePinCode");

	return Clss;
}


// EOSUserInterface_EnterDevicePinCode OnlineSubsystemRedpointEOS.Default__EOSUserInterface_EnterDevicePinCode
// (Public, ClassDefaultObject, ArchetypeObject)

class IEOSUserInterface_EnterDevicePinCode* IEOSUserInterface_EnterDevicePinCode::GetDefaultObj()
{
	static class IEOSUserInterface_EnterDevicePinCode* Default = nullptr;

	if (!Default)
		Default = static_cast<IEOSUserInterface_EnterDevicePinCode*>(IEOSUserInterface_EnterDevicePinCode::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_EnterDevicePinCode_Context*Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      VerificationUrl                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      PinCode                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class FString IEOSUserInterface_EnterDevicePinCode::SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context** Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_EnterDevicePinCode", "SetupUserInterface");

	Params::IEOSUserInterface_EnterDevicePinCode_SetupUserInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = Parms.Context;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context
// (None)

class UClass* UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context");

	return Clss;
}


// EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context OnlineSubsystemRedpointEOS.Default__EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context::GetDefaultObj()
{
	static class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context*>(UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.SelectedCandidates
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FEOSUserInterface_CandidateEOSAccount>SelectedCandidates                                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, EditConst)

void UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context::SelectedCandidates(const TArray<struct FEOSUserInterface_CandidateEOSAccount>& SelectedCandidates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context", "SelectedCandidates");

	Params::UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context_SelectedCandidates_Params Parms{};

	Parms.SelectedCandidates = SelectedCandidates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform
// (None)

class UClass* IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform");

	return Clss;
}


// EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform OnlineSubsystemRedpointEOS.Default__EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform
// (Public, ClassDefaultObject, ArchetypeObject)

class IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform* IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform::GetDefaultObj()
{
	static class IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform* Default = nullptr;

	if (!Default)
		Default = static_cast<IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform*>(IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.SetupUserInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context*Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FEOSUserInterface_CandidateEOSAccount>AvailableCandidates                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

TArray<struct FEOSUserInterface_CandidateEOSAccount> IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform::SetupUserInterface(class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context** Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform", "SetupUserInterface");

	Params::IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_SetupUserInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = Parms.Context;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context
// (None)

class UClass* UEOSUserInterface_SelectEOSAccount_Context::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_SelectEOSAccount_Context");

	return Clss;
}


// EOSUserInterface_SelectEOSAccount_Context OnlineSubsystemRedpointEOS.Default__EOSUserInterface_SelectEOSAccount_Context
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSUserInterface_SelectEOSAccount_Context* UEOSUserInterface_SelectEOSAccount_Context::GetDefaultObj()
{
	static class UEOSUserInterface_SelectEOSAccount_Context* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSUserInterface_SelectEOSAccount_Context*>(UEOSUserInterface_SelectEOSAccount_Context::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FEOSUserInterface_CandidateEOSAccountSelectedCandidate                                                (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FEOSUserInterface_CandidateEOSAccount UEOSUserInterface_SelectEOSAccount_Context::SelectCandidate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_SelectEOSAccount_Context", "SelectCandidate");

	Params::UEOSUserInterface_SelectEOSAccount_Context_SelectCandidate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount
// (None)

class UClass* IEOSUserInterface_SelectEOSAccount::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_SelectEOSAccount");

	return Clss;
}


// EOSUserInterface_SelectEOSAccount OnlineSubsystemRedpointEOS.Default__EOSUserInterface_SelectEOSAccount
// (Public, ClassDefaultObject, ArchetypeObject)

class IEOSUserInterface_SelectEOSAccount* IEOSUserInterface_SelectEOSAccount::GetDefaultObj()
{
	static class IEOSUserInterface_SelectEOSAccount* Default = nullptr;

	if (!Default)
		Default = static_cast<IEOSUserInterface_SelectEOSAccount*>(IEOSUserInterface_SelectEOSAccount::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount.SetupUserInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SelectEOSAccount_Context*Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FEOSUserInterface_CandidateEOSAccount>AvailableCandidates                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

TArray<struct FEOSUserInterface_CandidateEOSAccount> IEOSUserInterface_SelectEOSAccount::SetupUserInterface(class UEOSUserInterface_SelectEOSAccount_Context** Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_SelectEOSAccount", "SetupUserInterface");

	Params::IEOSUserInterface_SelectEOSAccount_SetupUserInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = Parms.Context;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context
// (None)

class UClass* UEOSUserInterface_SignInOrCreateAccount_Context::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_SignInOrCreateAccount_Context");

	return Clss;
}


// EOSUserInterface_SignInOrCreateAccount_Context OnlineSubsystemRedpointEOS.Default__EOSUserInterface_SignInOrCreateAccount_Context
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSUserInterface_SignInOrCreateAccount_Context* UEOSUserInterface_SignInOrCreateAccount_Context::GetDefaultObj()
{
	static class UEOSUserInterface_SignInOrCreateAccount_Context* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSUserInterface_SignInOrCreateAccount_Context*>(UEOSUserInterface_SignInOrCreateAccount_Context::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EEOSUserInterface_SignInOrCreateAccount_ChoiceSelectedChoice                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class EEOSUserInterface_SignInOrCreateAccount_Choice UEOSUserInterface_SignInOrCreateAccount_Context::SelectChoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_SignInOrCreateAccount_Context", "SelectChoice");

	Params::UEOSUserInterface_SignInOrCreateAccount_Context_SelectChoice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount
// (None)

class UClass* IEOSUserInterface_SignInOrCreateAccount::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_SignInOrCreateAccount");

	return Clss;
}


// EOSUserInterface_SignInOrCreateAccount OnlineSubsystemRedpointEOS.Default__EOSUserInterface_SignInOrCreateAccount
// (Public, ClassDefaultObject, ArchetypeObject)

class IEOSUserInterface_SignInOrCreateAccount* IEOSUserInterface_SignInOrCreateAccount::GetDefaultObj()
{
	static class IEOSUserInterface_SignInOrCreateAccount* Default = nullptr;

	if (!Default)
		Default = static_cast<IEOSUserInterface_SignInOrCreateAccount*>(IEOSUserInterface_SignInOrCreateAccount::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SignInOrCreateAccount_Context*Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void IEOSUserInterface_SignInOrCreateAccount::SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context** Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_SignInOrCreateAccount", "SetupUserInterface");

	Params::IEOSUserInterface_SignInOrCreateAccount_SetupUserInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context
// (None)

class UClass* UEOSUserInterface_SwitchToCrossPlatformAccount_Context::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_SwitchToCrossPlatformAccount_Context");

	return Clss;
}


// EOSUserInterface_SwitchToCrossPlatformAccount_Context OnlineSubsystemRedpointEOS.Default__EOSUserInterface_SwitchToCrossPlatformAccount_Context
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* UEOSUserInterface_SwitchToCrossPlatformAccount_Context::GetDefaultObj()
{
	static class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSUserInterface_SwitchToCrossPlatformAccount_Context*>(UEOSUserInterface_SwitchToCrossPlatformAccount_Context::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context.SelectChoice
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EEOSUserInterface_SwitchToCrossPlatformAccount_ChoiceSelectedChoice                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice UEOSUserInterface_SwitchToCrossPlatformAccount_Context::SelectChoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_SwitchToCrossPlatformAccount_Context", "SelectChoice");

	Params::UEOSUserInterface_SwitchToCrossPlatformAccount_Context_SelectChoice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount
// (None)

class UClass* IEOSUserInterface_SwitchToCrossPlatformAccount::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_SwitchToCrossPlatformAccount");

	return Clss;
}


// EOSUserInterface_SwitchToCrossPlatformAccount OnlineSubsystemRedpointEOS.Default__EOSUserInterface_SwitchToCrossPlatformAccount
// (Public, ClassDefaultObject, ArchetypeObject)

class IEOSUserInterface_SwitchToCrossPlatformAccount* IEOSUserInterface_SwitchToCrossPlatformAccount::GetDefaultObj()
{
	static class IEOSUserInterface_SwitchToCrossPlatformAccount* Default = nullptr;

	if (!Default)
		Default = static_cast<IEOSUserInterface_SwitchToCrossPlatformAccount*>(IEOSUserInterface_SwitchToCrossPlatformAccount::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount.SetupUserInterface
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SwitchToCrossPlatformAccount_Context*Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      EpicAccountName                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class FString IEOSUserInterface_SwitchToCrossPlatformAccount::SetupUserInterface(class UEOSUserInterface_SwitchToCrossPlatformAccount_Context** Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_SwitchToCrossPlatformAccount", "SetupUserInterface");

	Params::IEOSUserInterface_SwitchToCrossPlatformAccount_SetupUserInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = Parms.Context;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemRedpointEOS.RecentPlayersWorldSubsystem
// (None)

class UClass* URecentPlayersWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecentPlayersWorldSubsystem");

	return Clss;
}


// RecentPlayersWorldSubsystem OnlineSubsystemRedpointEOS.Default__RecentPlayersWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URecentPlayersWorldSubsystem* URecentPlayersWorldSubsystem::GetDefaultObj()
{
	static class URecentPlayersWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URecentPlayersWorldSubsystem*>(URecentPlayersWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


