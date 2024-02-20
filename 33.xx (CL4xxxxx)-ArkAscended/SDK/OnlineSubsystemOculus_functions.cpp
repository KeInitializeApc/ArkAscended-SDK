#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
// (None)

class UClass* UOculusCreateSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusCreateSessionCallbackProxy");

	return Clss;
}


// OculusCreateSessionCallbackProxy OnlineSubsystemOculus.Default__OculusCreateSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusCreateSessionCallbackProxy* UOculusCreateSessionCallbackProxy::GetDefaultObj()
{
	static class UOculusCreateSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusCreateSessionCallbackProxy*>(UOculusCreateSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PublicConnections                                                (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FString                      OculusMatchmakingPool                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class UOculusCreateSessionCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UOculusCreateSessionCallbackProxy::CreateSession(int32 PublicConnections, class UOculusCreateSessionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusCreateSessionCallbackProxy", "CreateSession");

	Params::UOculusCreateSessionCallbackProxy_CreateSession_Params Parms{};

	Parms.PublicConnections = PublicConnections;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
// (None)

class UClass* UOculusEntitlementCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusEntitlementCallbackProxy");

	return Clss;
}


// OculusEntitlementCallbackProxy OnlineSubsystemOculus.Default__OculusEntitlementCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusEntitlementCallbackProxy* UOculusEntitlementCallbackProxy::GetDefaultObj()
{
	static class UOculusEntitlementCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusEntitlementCallbackProxy*>(UOculusEntitlementCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOculusEntitlementCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UOculusEntitlementCallbackProxy::VerifyEntitlement(class UOculusEntitlementCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusEntitlementCallbackProxy", "VerifyEntitlement");

	Params::UOculusEntitlementCallbackProxy_VerifyEntitlement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
// (None)

class UClass* UOculusFindSessionsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusFindSessionsCallbackProxy");

	return Clss;
}


// OculusFindSessionsCallbackProxy OnlineSubsystemOculus.Default__OculusFindSessionsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::GetDefaultObj()
{
	static class UOculusFindSessionsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusFindSessionsCallbackProxy*>(UOculusFindSessionsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MaxResults                                                       (Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UOculusFindSessionsCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UOculusFindSessionsCallbackProxy::FindModeratedSessions(int32 MaxResults, class UOculusFindSessionsCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFindSessionsCallbackProxy", "FindModeratedSessions");

	Params::UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params Parms{};

	Parms.MaxResults = MaxResults;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MaxResults                                                       (Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FString                      OculusMatchmakingPool                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class UOculusFindSessionsCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UOculusFindSessionsCallbackProxy::FindMatchmakingSessions(int32 MaxResults, class UOculusFindSessionsCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusFindSessionsCallbackProxy", "FindMatchmakingSessions");

	Params::UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params Parms{};

	Parms.MaxResults = MaxResults;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
// (None)

class UClass* UOculusIdentityCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusIdentityCallbackProxy");

	return Clss;
}


// OculusIdentityCallbackProxy OnlineSubsystemOculus.Default__OculusIdentityCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusIdentityCallbackProxy* UOculusIdentityCallbackProxy::GetDefaultObj()
{
	static class UOculusIdentityCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusIdentityCallbackProxy*>(UOculusIdentityCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              LocalUserNum                                                     (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class UOculusIdentityCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UOculusIdentityCallbackProxy::GetOculusIdentity(class UOculusIdentityCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusIdentityCallbackProxy", "GetOculusIdentity");

	Params::UOculusIdentityCallbackProxy_GetOculusIdentity_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemOculus.OculusNetConnection
// (None)

class UClass* UOculusNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusNetConnection");

	return Clss;
}


// OculusNetConnection OnlineSubsystemOculus.Default__OculusNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusNetConnection* UOculusNetConnection::GetDefaultObj()
{
	static class UOculusNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusNetConnection*>(UOculusNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemOculus.OculusNetDriver
// (None)

class UClass* UOculusNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusNetDriver");

	return Clss;
}


// OculusNetDriver OnlineSubsystemOculus.Default__OculusNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UOculusNetDriver* UOculusNetDriver::GetDefaultObj()
{
	static class UOculusNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusNetDriver*>(UOculusNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
// (None)

class UClass* UOculusUpdateSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OculusUpdateSessionCallbackProxy");

	return Clss;
}


// OculusUpdateSessionCallbackProxy OnlineSubsystemOculus.Default__OculusUpdateSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UOculusUpdateSessionCallbackProxy* UOculusUpdateSessionCallbackProxy::GetDefaultObj()
{
	static class UOculusUpdateSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOculusUpdateSessionCallbackProxy*>(UOculusUpdateSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldEnqueueInMatchmakingPool                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class UOculusUpdateSessionCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UOculusUpdateSessionCallbackProxy::SetSessionEnqueue(class UOculusUpdateSessionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OculusUpdateSessionCallbackProxy", "SetSessionEnqueue");

	Params::UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


