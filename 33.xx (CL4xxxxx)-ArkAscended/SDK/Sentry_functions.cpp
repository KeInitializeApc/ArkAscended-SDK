#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Sentry.SentryAttachment
// (None)

class UClass* USentryAttachment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryAttachment");

	return Clss;
}


// SentryAttachment Sentry.Default__SentryAttachment
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryAttachment* USentryAttachment::GetDefaultObj()
{
	static class USentryAttachment* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryAttachment*>(USentryAttachment::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryAttachment.InitializeWithPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ContentType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

class FString USentryAttachment::InitializeWithPath(class FString* Path, class FString* ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "InitializeWithPath");

	Params::USentryAttachment_InitializeWithPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Path != nullptr)
		*Path = std::move(Parms.Path);

	if (ContentType != nullptr)
		*ContentType = std::move(Parms.ContentType);

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.InitializeWithData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ContentType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

class FString USentryAttachment::InitializeWithData(const TArray<uint8>& Data, class FString* ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "InitializeWithData");

	Params::USentryAttachment_InitializeWithData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContentType != nullptr)
		*ContentType = std::move(Parms.ContentType);

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryAttachment::GetPath(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetPath");

	Params::USentryAttachment_GetPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryAttachment.GetFilename
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryAttachment::GetFilename(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetFilename");

	Params::USentryAttachment_GetFilename_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryAttachment.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryAttachment::GetData(const TArray<uint8>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetData");

	Params::USentryAttachment_GetData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryAttachment.GetContentType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryAttachment::GetContentType(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetContentType");

	Params::USentryAttachment_GetContentType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryBreadcrumb
// (None)

class UClass* USentryBreadcrumb::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryBreadcrumb");

	return Clss;
}


// SentryBreadcrumb Sentry.Default__SentryBreadcrumb
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryBreadcrumb* USentryBreadcrumb::GetDefaultObj()
{
	static class USentryBreadcrumb* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryBreadcrumb*>(USentryBreadcrumb::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryBreadcrumb.SetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Type                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)

void USentryBreadcrumb::SetType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetType");

	Params::USentryBreadcrumb_SetType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)

void USentryBreadcrumb::SetMessage(class FString* Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetMessage");

	Params::USentryBreadcrumb_SetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function Sentry.SentryBreadcrumb.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)

void USentryBreadcrumb::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetLevel");

	Params::USentryBreadcrumb_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Data                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

void USentryBreadcrumb::SetData(TMap<class FString, class FString> Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetData");

	Params::USentryBreadcrumb_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)

void USentryBreadcrumb::SetCategory(class FString* Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetCategory");

	Params::USentryBreadcrumb_SetCategory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

}


// Function Sentry.SentryBreadcrumb.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryBreadcrumb::GetType(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetType");

	Params::USentryBreadcrumb_GetType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.GetMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryBreadcrumb::GetMessage(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetMessage");

	Params::USentryBreadcrumb_GetMessage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryBreadcrumb::GetLevel(enum class ESentryLevel ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetLevel");

	Params::USentryBreadcrumb_GetLevel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryBreadcrumb::GetData(TMap<class FString, class FString> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetData");

	Params::USentryBreadcrumb_GetData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.GetCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryBreadcrumb::GetCategory(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetCategory");

	Params::USentryBreadcrumb_GetCategory_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryEvent
// (None)

class UClass* USentryEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryEvent");

	return Clss;
}


// SentryEvent Sentry.Default__SentryEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryEvent* USentryEvent::GetDefaultObj()
{
	static class USentryEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryEvent*>(USentryEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryEvent.SetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)

void USentryEvent::SetMessage(class FString* Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetMessage");

	Params::USentryEvent_SetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function Sentry.SentryEvent.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)

void USentryEvent::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetLevel");

	Params::USentryEvent_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.GetMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryEvent::GetMessage(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetMessage");

	Params::USentryEvent_GetMessage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryEvent::GetLevel(enum class ESentryLevel ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetLevel");

	Params::USentryEvent_GetLevel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryId
// (None)

class UClass* USentryId::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryId");

	return Clss;
}


// SentryId Sentry.Default__SentryId
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryId* USentryId::GetDefaultObj()
{
	static class USentryId* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryId*>(USentryId::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryId.ToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryId::ToString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryId", "ToString");

	Params::USentryId_ToString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryLibrary
// (None)

class UClass* USentryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryLibrary");

	return Clss;
}


// SentryLibrary Sentry.Default__SentryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryLibrary* USentryLibrary::GetDefaultObj()
{
	static class USentryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryLibrary*>(USentryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryLibrary.StringToBytesArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// TArray<uint8>                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryLibrary::StringToBytesArray(const class FString& InString, const TArray<uint8>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "StringToBytesArray");

	Params::USentryLibrary_StringToBytesArray_Params Parms{};

	Parms.InString = InString;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryLibrary.SaveStringToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString USentryLibrary::SaveStringToFile(const class FString& InString, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "SaveStringToFile");

	Params::USentryLibrary_SaveStringToFile_Params Parms{};

	Parms.InString = InString;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryUserFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventId                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Email                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Comments                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class USentryUserFeedback*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryLibrary::CreateSentryUserFeedback(class USentryId** EventId, class FString* Name, const class FString& Email, class FString* Comments, class USentryUserFeedback* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryUserFeedback");

	Params::USentryLibrary_CreateSentryUserFeedback_Params Parms{};

	Parms.Email = Email;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventId != nullptr)
		*EventId = Parms.EventId;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Comments != nullptr)
		*Comments = std::move(Parms.Comments);

}


// Function Sentry.SentryLibrary.CreateSentryUser
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class FString                      Username                                                         (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      IpAddress                                                        (BlueprintVisible, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// TMap<class FString, class FString> Data                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USentryUser*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryLibrary::CreateSentryUser(const class FString& Email, class FString* ID, const class FString& Username, class FString* IpAddress, TMap<class FString, class FString> Data, class USentryUser* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryUser");

	Params::USentryLibrary_CreateSentryUser_Params Parms{};

	Parms.Email = Email;
	Parms.Username = Username;
	Parms.Data = Data;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

	if (IpAddress != nullptr)
		*IpAddress = std::move(Parms.IpAddress);

}


// Function Sentry.SentryLibrary.CreateSentryEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
// class USentryEvent*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryLibrary::CreateSentryEvent(class FString* Message, enum class ESentryLevel Level, class USentryEvent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryEvent");

	Params::USentryLibrary_CreateSentryEvent_Params Parms{};

	Parms.Level = Level;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function Sentry.SentryLibrary.CreateSentryBreadcrumb
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      Type                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
// class FString                      Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// TMap<class FString, class FString> Data                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
// class USentryBreadcrumb*           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryLibrary::CreateSentryBreadcrumb(class FString* Message, const class FString& Type, class FString* Category, TMap<class FString, class FString> Data, enum class ESentryLevel Level, class USentryBreadcrumb* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryBreadcrumb");

	Params::USentryLibrary_CreateSentryBreadcrumb_Params Parms{};

	Parms.Type = Type;
	Parms.Data = Data;
	Parms.Level = Level;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

}


// Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ContentType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class USentryAttachment*           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString USentryLibrary::CreateSentryAttachmentWithPath(class FString* Path, class FString* ContentType, class USentryAttachment* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryAttachmentWithPath");

	Params::USentryLibrary_CreateSentryAttachmentWithPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Path != nullptr)
		*Path = std::move(Parms.Path);

	if (ContentType != nullptr)
		*ContentType = std::move(Parms.ContentType);

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ContentType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class USentryAttachment*           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString USentryLibrary::CreateSentryAttachmentWithData(const TArray<uint8>& Data, class FString* ContentType, class USentryAttachment* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryAttachmentWithData");

	Params::USentryLibrary_CreateSentryAttachmentWithData_Params Parms{};

	Parms.Data = Data;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContentType != nullptr)
		*ContentType = std::move(Parms.ContentType);

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.ByteArrayToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryLibrary::ByteArrayToString(TArray<uint8>* Array, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "ByteArrayToString");

	Params::USentryLibrary_ByteArrayToString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Class Sentry.SentryScope
// (None)

class UClass* USentryScope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryScope");

	return Clss;
}


// SentryScope Sentry.Default__SentryScope
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryScope* USentryScope::GetDefaultObj()
{
	static class USentryScope* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryScope*>(USentryScope::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryScope.SetTagValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// class FString                      Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

class FString USentryScope::SetTagValue(class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetTagValue");

	Params::USentryScope_SetTagValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.SetTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Tags                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)

void USentryScope::SetTags(TMap<class FString, class FString>* Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetTags");

	Params::USentryScope_SetTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tags != nullptr)
		*Tags = Parms.Tags;

}


// Function Sentry.SentryScope.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)

void USentryScope::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetLevel");

	Params::USentryScope_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetFingerprint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Fingerprint                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

TArray<class FString> USentryScope::SetFingerprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetFingerprint");

	Params::USentryScope_SetFingerprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.SetExtraValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// class FString                      Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

class FString USentryScope::SetExtraValue(class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetExtraValue");

	Params::USentryScope_SetExtraValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.SetExtras
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Extras                                                           (Edit, ConstParm, Parm, OutParm, Config, InstancedReference, SubobjectReference)

void USentryScope::SetExtras(TMap<class FString, class FString>* Extras)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetExtras");

	Params::USentryScope_SetExtras_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Extras != nullptr)
		*Extras = Parms.Extras;

}


// Function Sentry.SentryScope.SetEnvironment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Environment                                                      (ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class FString USentryScope::SetEnvironment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetEnvironment");

	Params::USentryScope_SetEnvironment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.SetDist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Dist                                                             (Parm, OutParm, Config, InstancedReference, SubobjectReference)

void USentryScope::SetDist(class FString* Dist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetDist");

	Params::USentryScope_SetDist_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dist != nullptr)
		*Dist = std::move(Parms.Dist);

}


// Function Sentry.SentryScope.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// TMap<class FString, class FString> Values                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)

TMap<class FString, class FString> USentryScope::SetContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetContext");

	Params::USentryScope_SetContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)

class FString USentryScope::RemoveTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveTag");

	Params::USentryScope_RemoveTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.RemoveExtra
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)

class FString USentryScope::RemoveExtra()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveExtra");

	Params::USentryScope_RemoveExtra_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.RemoveContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)

class FString USentryScope::RemoveContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveContext");

	Params::USentryScope_RemoveContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetTagValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString USentryScope::GetTagValue(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetTagValue");

	Params::USentryScope_GetTagValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryScope::GetTags(TMap<class FString, class FString> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetTags");

	Params::USentryScope_GetTags_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryScope::GetLevel(enum class ESentryLevel ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetLevel");

	Params::USentryScope_GetLevel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.GetFingerprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryScope::GetFingerprint(const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetFingerprint");

	Params::USentryScope_GetFingerprint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.GetExtraValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString USentryScope::GetExtraValue(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetExtraValue");

	Params::USentryScope_GetExtraValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetExtras
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryScope::GetExtras(TMap<class FString, class FString> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetExtras");

	Params::USentryScope_GetExtras_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.GetEnvironment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryScope::GetEnvironment(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetEnvironment");

	Params::USentryScope_GetEnvironment_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.GetDist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryScope::GetDist(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetDist");

	Params::USentryScope_GetDist_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.ClearBreadcrumbs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::ClearBreadcrumbs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "ClearBreadcrumbs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.ClearAttachments
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::ClearAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "ClearAttachments");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.AddBreadcrumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

void USentryScope::AddBreadcrumb(class USentryBreadcrumb** Breadcrumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "AddBreadcrumb");

	Params::USentryScope_AddBreadcrumb_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Breadcrumb != nullptr)
		*Breadcrumb = Parms.Breadcrumb;

}


// Function Sentry.SentryScope.AddAttachment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

void USentryScope::AddAttachment(class USentryAttachment** Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "AddAttachment");

	Params::USentryScope_AddAttachment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Attachment != nullptr)
		*Attachment = Parms.Attachment;

}


// Class Sentry.SentrySettings
// (None)

class UClass* USentrySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySettings");

	return Clss;
}


// SentrySettings Sentry.Default__SentrySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySettings* USentrySettings::GetDefaultObj()
{
	static class USentrySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySettings*>(USentrySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Sentry.SentrySubsystem
// (None)

class UClass* USentrySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySubsystem");

	return Clss;
}


// SentrySubsystem Sentry.Default__SentrySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySubsystem* USentrySubsystem::GetDefaultObj()
{
	static class USentrySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySubsystem*>(USentrySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentrySubsystem.SetUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryUser*                 User                                                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)

void USentrySubsystem::SetUser(class USentryUser** User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetUser");

	Params::USentrySubsystem_SetUser_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (User != nullptr)
		*User = Parms.User;

}


// Function Sentry.SentrySubsystem.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// class FString                      Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

class FString USentrySubsystem::SetTag(class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetTag");

	Params::USentrySubsystem_SetTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)

void USentrySubsystem::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetLevel");

	Params::USentrySubsystem_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// TMap<class FString, class FString> Values                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)

TMap<class FString, class FString> USentrySubsystem::SetContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetContext");

	Params::USentrySubsystem_SetContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.RemoveUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::RemoveUser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "RemoveUser");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)

class FString USentrySubsystem::RemoveTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "RemoveTag");

	Params::USentrySubsystem_RemoveTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.InitializeWithSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnConfigureSettings                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)

void USentrySubsystem::InitializeWithSettings(FDelegateProperty_* OnConfigureSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "InitializeWithSettings");

	Params::USentrySubsystem_InitializeWithSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnConfigureSettings != nullptr)
		*OnConfigureSettings = Parms.OnConfigureSettings;

}


// Function Sentry.SentrySubsystem.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ConfigureScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnConfigureScope                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)

void USentrySubsystem::ConfigureScope(FDelegateProperty_* OnConfigureScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ConfigureScope");

	Params::USentrySubsystem_ConfigureScope_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnConfigureScope != nullptr)
		*OnConfigureScope = Parms.OnConfigureScope;

}


// Function Sentry.SentrySubsystem.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ClearBreadcrumbs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::ClearBreadcrumbs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ClearBreadcrumbs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventId                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class FString                      Email                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Comments                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void USentrySubsystem::CaptureUserFeedbackWithParams(class USentryId** EventId, const class FString& Email, class FString* Comments, class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureUserFeedbackWithParams");

	Params::USentrySubsystem_CaptureUserFeedbackWithParams_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventId != nullptr)
		*EventId = Parms.EventId;

	if (Comments != nullptr)
		*Comments = std::move(Parms.Comments);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function Sentry.SentrySubsystem.CaptureUserFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryUserFeedback*         UserFeedback                                                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)

void USentrySubsystem::CaptureUserFeedback(class USentryUserFeedback** UserFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureUserFeedback");

	Params::USentrySubsystem_CaptureUserFeedback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UserFeedback != nullptr)
		*UserFeedback = Parms.UserFeedback;

}


// Function Sentry.SentrySubsystem.CaptureMessageWithScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 OnConfigureScope                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
// class USentryId*                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentrySubsystem::CaptureMessageWithScope(class FString* Message, FDelegateProperty_* OnConfigureScope, enum class ESentryLevel Level, class USentryId* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureMessageWithScope");

	Params::USentrySubsystem_CaptureMessageWithScope_Params Parms{};

	Parms.Level = Level;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	if (OnConfigureScope != nullptr)
		*OnConfigureScope = Parms.OnConfigureScope;

}


// Function Sentry.SentrySubsystem.CaptureMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
// class USentryId*                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentrySubsystem::CaptureMessage(class FString* Message, enum class ESentryLevel Level, class USentryId* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureMessage");

	Params::USentrySubsystem_CaptureMessage_Params Parms{};

	Parms.Level = Level;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function Sentry.SentrySubsystem.CaptureEventWithScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USentryEvent*                Event                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 OnConfigureScope                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class USentryId*                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentrySubsystem::CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty_* OnConfigureScope, class USentryId* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureEventWithScope");

	Params::USentrySubsystem_CaptureEventWithScope_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnConfigureScope != nullptr)
		*OnConfigureScope = Parms.OnConfigureScope;

}


// Function Sentry.SentrySubsystem.CaptureEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryEvent*                Event                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class USentryId*                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentrySubsystem::CaptureEvent(class USentryEvent* Event, class USentryId* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureEvent");

	Params::USentrySubsystem_CaptureEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// class FString                      Type                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
// TMap<class FString, class FString> Data                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)

void USentrySubsystem::AddBreadcrumbWithParams(class FString* Message, class FString* Category, const class FString& Type, TMap<class FString, class FString> Data, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddBreadcrumbWithParams");

	Params::USentrySubsystem_AddBreadcrumbWithParams_Params Parms{};

	Parms.Type = Type;
	Parms.Data = Data;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

}


// Function Sentry.SentrySubsystem.AddBreadcrumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

void USentrySubsystem::AddBreadcrumb(class USentryBreadcrumb** Breadcrumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddBreadcrumb");

	Params::USentrySubsystem_AddBreadcrumb_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Breadcrumb != nullptr)
		*Breadcrumb = Parms.Breadcrumb;

}


// Class Sentry.SentryUser
// (None)

class UClass* USentryUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryUser");

	return Clss;
}


// SentryUser Sentry.Default__SentryUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryUser* USentryUser::GetDefaultObj()
{
	static class USentryUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryUser*>(USentryUser::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryUser.SetUsername
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Username                                                         (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUser::SetUsername(const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetUsername");

	Params::USentryUser_SetUsername_Params Parms{};

	Parms.Username = Username;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetIpAddress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IpAddress                                                        (BlueprintVisible, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

void USentryUser::SetIpAddress(class FString* IpAddress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetIpAddress");

	Params::USentryUser_SetIpAddress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IpAddress != nullptr)
		*IpAddress = std::move(Parms.IpAddress);

}


// Function Sentry.SentryUser.SetId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)

void USentryUser::SetId(class FString* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetId");

	Params::USentryUser_SetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

}


// Function Sentry.SentryUser.SetEmail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUser::SetEmail(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetEmail");

	Params::USentryUser_SetEmail_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Data                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

void USentryUser::SetData(TMap<class FString, class FString> Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetData");

	Params::USentryUser_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.GetUsername
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUser::GetUsername(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetUsername");

	Params::USentryUser_GetUsername_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.GetIpAddress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUser::GetIpAddress(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetIpAddress");

	Params::USentryUser_GetIpAddress_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.GetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUser::GetId(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetId");

	Params::USentryUser_GetId_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.GetEmail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUser::GetEmail(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetEmail");

	Params::USentryUser_GetEmail_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUser::GetData(TMap<class FString, class FString> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetData");

	Params::USentryUser_GetData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryUserFeedback
// (None)

class UClass* USentryUserFeedback::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryUserFeedback");

	return Clss;
}


// SentryUserFeedback Sentry.Default__SentryUserFeedback
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryUserFeedback* USentryUserFeedback::GetDefaultObj()
{
	static class USentryUserFeedback* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryUserFeedback*>(USentryUserFeedback::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryUserFeedback.SetName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void USentryUserFeedback::SetName(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetName");

	Params::USentryUserFeedback_SetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function Sentry.SentryUserFeedback.SetEmail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUserFeedback::SetEmail(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetEmail");

	Params::USentryUserFeedback_SetEmail_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.SetComment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Comments                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

void USentryUserFeedback::SetComment(class FString* Comments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetComment");

	Params::USentryUserFeedback_SetComment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Comments != nullptr)
		*Comments = std::move(Parms.Comments);

}


// Function Sentry.SentryUserFeedback.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventId                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

void USentryUserFeedback::Initialize(class USentryId** EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "Initialize");

	Params::USentryUserFeedback_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventId != nullptr)
		*EventId = Parms.EventId;

}


// Function Sentry.SentryUserFeedback.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUserFeedback::GetName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetName");

	Params::USentryUserFeedback_GetName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.GetEmail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUserFeedback::GetEmail(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetEmail");

	Params::USentryUserFeedback_GetEmail_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.GetComment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USentryUserFeedback::GetComment(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetComment");

	Params::USentryUserFeedback_GetComment_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


