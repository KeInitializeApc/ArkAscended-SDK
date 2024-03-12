#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// RigVMBlueprintGeneratedClass SK_Male_Hair_Mohawk_CtrlRig.SK_Male_Hair_Mohawk_CtrlRig_C
// (None)

class UClass* USK_Male_Hair_Mohawk_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Male_Hair_Mohawk_CtrlRig_C");

	return Clss;
}


// SK_Male_Hair_Mohawk_CtrlRig_C SK_Male_Hair_Mohawk_CtrlRig.Default__SK_Male_Hair_Mohawk_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Male_Hair_Mohawk_CtrlRig_C* USK_Male_Hair_Mohawk_CtrlRig_C::GetDefaultObj()
{
	static class USK_Male_Hair_Mohawk_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Male_Hair_Mohawk_CtrlRig_C*>(USK_Male_Hair_Mohawk_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass SK_Male_Hair_Mohawk_CtrlRig.RigVMMemory_Literal
// (None)

class UClass* URigVMMemory_Literal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Literal");

	return Clss;
}


// RigVMMemory_Literal SK_Male_Hair_Mohawk_CtrlRig.Default__RigVMMemory_Literal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Literal* URigVMMemory_Literal::GetDefaultObj()
{
	static class URigVMMemory_Literal* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Literal*>(URigVMMemory_Literal::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass SK_Male_Hair_Mohawk_CtrlRig.RigVMMemory_Work
// (None)

class UClass* URigVMMemory_Work::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Work");

	return Clss;
}


// RigVMMemory_Work SK_Male_Hair_Mohawk_CtrlRig.Default__RigVMMemory_Work
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Work* URigVMMemory_Work::GetDefaultObj()
{
	static class URigVMMemory_Work* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Work*>(URigVMMemory_Work::StaticClass()->DefaultObject);

	return Default;
}

}


