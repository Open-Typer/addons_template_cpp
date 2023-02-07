#include "Addon.h"

using namespace TemplateAddon;
#include <QCoreApplication>

Addon::Addon::Addon(QObject *parent) :
	QObject(parent)
{
	/*
	 * Use the constructor only for initialization,
	 * do not show any windows or add UI components here,
	 * use the InitApp event below for that.
	 */
	qInfo("Addon loaded!"); // this will print when the addon loads
}

Addon::~Addon()
{
	// Destroy some objects here or leave unchanged
}

void Addon::addonEvent(AddonApi::Event type, QVariantMap args)
{
	Q_UNUSED(args);
	// Add some code for events here
	switch(type)
	{
		case AddonApi::Event_InitApp:
			// Create UI components here
			qInfo("Open-Typer has started");
			break;
		default:
			break;
	}
}
