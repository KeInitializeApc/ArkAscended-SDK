#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// RigVMBlueprintGeneratedClass Human_WeaponIK_CtrlRig.Human_WeaponIK_CtrlRig_C
// (None)

class UClass* UHuman_WeaponIK_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Human_WeaponIK_CtrlRig_C");

	return Clss;
}


// Human_WeaponIK_CtrlRig_C Human_WeaponIK_CtrlRig.Default__Human_WeaponIK_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuman_WeaponIK_CtrlRig_C* UHuman_WeaponIK_CtrlRig_C::GetDefaultObj()
{
	static class UHuman_WeaponIK_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuman_WeaponIK_CtrlRig_C*>(UHuman_WeaponIK_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass Human_WeaponIK_CtrlRig.RigVMMemory_Literal
// (None)

class UClass* URigVMMemory_Literal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Literal");

	return Clss;
}


// RigVMMemory_Literal Human_WeaponIK_CtrlRig.Default__RigVMMemory_Literal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Literal* URigVMMemory_Literal::GetDefaultObj()
{
	static class URigVMMemory_Literal* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Literal*>(URigVMMemory_Literal::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass Human_WeaponIK_CtrlRig.RigVMMemory_Work
// (None)

class UClass* URigVMMemory_Work::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Work");

	return Clss;
}


// RigVMMemory_Work Human_WeaponIK_CtrlRig.Default__RigVMMemory_Work
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Work* URigVMMemory_Work::GetDefaultObj()
{
	static class URigVMMemory_Work* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Work*>(URigVMMemory_Work::StaticClass()->DefaultObject);

	return Default;
}

}


